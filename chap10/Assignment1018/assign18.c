/* 파일명: assign18.c

  * 내용: 음원의 플레이리스트와 그 재생시간을 출력하는 프로그램을 작성해라.

  * 작성자: 이승훈

  * 날짜: 2025.05.31

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 8

typedef struct song 
{
    char title[100];
    char artist[100];
    char genre[30];
    int play_time;

} SONG;

void Assignment1018();
void PrintSonglist(SONG* songs, int size);
void PrintPlaylist(SONG* playlist[], int size);

int main() 
{
    Assignment1018();
    return 0;
}

void Assignment1018() 
{
    SONG songs[MAX] = {
        {"thank u, next", "Ariana Grande", "pop", 208},
        {"Attention", "Charlie Puth", "pop", 211},
        {"별 보러 가자", "박보검", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "방탄소년단", "hip-hop", 209},
        {"봄날", "방탄소년단", "hip-hop", 274},
        {"Awake", "방탄소년단", "ballad", 226},
        {"아낙네", "MINO", "balled", 241}
    };

    SONG* playlist[5] = { NULL };

    int count = 0;
    int choice;
    int arr[MAX] = { 0 };
    
    printf("\n전체 곡 목록\n");
    PrintSonglist(songs, MAX);

    // 조건 자체를 숫자로 걸면 조금 달라짐;;

    while (1) 
    {
        printf("\n플레이리스트에 추가할 곡 번호?: ");
        scanf("%d", &choice);

        if (choice == 0) 
            break;

        if (choice < 1 || choice > MAX) 
        {
            printf("잘못된 곡 번호입니다.\n");
            continue;
        }

        if (arr[choice - 1]) 
        {
            printf("이미 추가된 곡입니다.\n");
            continue;
        }

        if (count >= 5) 
        {
            printf("플레이리스트가 가득 찼습니다.\n");
            continue;
        }

        playlist[count] = &songs[choice - 1];
        arr[choice - 1] = 1;
        count++;

        PrintPlaylist(playlist, count);
    }
}

void PrintSonglist(SONG* songs, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%2d. %-20s %-15s %-10s %4d초\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].play_time);
    }
}

void PrintPlaylist(SONG* playlist[], int size) 
{
    int total_time = 0;

    printf("\n<<플레이리스트>>\n");

    for (int i = 0; i < size; i++) 
    {
        printf("%2d. %-20s %-15s %-10s %4d초\n", i + 1, playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->play_time);
        total_time += playlist[i]->play_time;
    }

    printf("총 재생시간: %d초\n", total_time);
}
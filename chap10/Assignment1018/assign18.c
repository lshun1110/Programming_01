/* ���ϸ�: assign18.c

  * ����: ������ �÷��̸���Ʈ�� �� ����ð��� ����ϴ� ���α׷��� �ۼ��ض�.

  * �ۼ���: �̽���

  * ��¥: 2025.05.31

  * ����: v1.0

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
        {"�� ���� ����", "�ں���", "ballad", 316},
        {"How Long", "Charlie Puth", "pop", 198},
        {"I'm Fine", "��ź�ҳ��", "hip-hop", 209},
        {"����", "��ź�ҳ��", "hip-hop", 274},
        {"Awake", "��ź�ҳ��", "ballad", 226},
        {"�Ƴ���", "MINO", "balled", 241}
    };

    SONG* playlist[5] = { NULL };

    int count = 0;
    int choice;
    int arr[MAX] = { 0 };
    
    printf("\n��ü �� ���\n");
    PrintSonglist(songs, MAX);

    // ���� ��ü�� ���ڷ� �ɸ� ���� �޶���;;

    while (1) 
    {
        printf("\n�÷��̸���Ʈ�� �߰��� �� ��ȣ?: ");
        scanf("%d", &choice);

        if (choice == 0) 
            break;

        if (choice < 1 || choice > MAX) 
        {
            printf("�߸��� �� ��ȣ�Դϴ�.\n");
            continue;
        }

        if (arr[choice - 1]) 
        {
            printf("�̹� �߰��� ���Դϴ�.\n");
            continue;
        }

        if (count >= 5) 
        {
            printf("�÷��̸���Ʈ�� ���� á���ϴ�.\n");
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
        printf("%2d. %-20s %-15s %-10s %4d��\n", i + 1, songs[i].title, songs[i].artist, songs[i].genre, songs[i].play_time);
    }
}

void PrintPlaylist(SONG* playlist[], int size) 
{
    int total_time = 0;

    printf("\n<<�÷��̸���Ʈ>>\n");

    for (int i = 0; i < size; i++) 
    {
        printf("%2d. %-20s %-15s %-10s %4d��\n", i + 1, playlist[i]->title, playlist[i]->artist, playlist[i]->genre, playlist[i]->play_time);
        total_time += playlist[i]->play_time;
    }

    printf("�� ����ð�: %d��\n", total_time);
}
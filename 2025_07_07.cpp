#include <string>
#include <vector>

using namespace std;

// n%w = remain, if(n%w == 0) n/w = height else n/w + 1 = height
// if(remain == 0) box[] = height else
// if(height%2 == 0) box[0 ~ w-remain-1] = height-1, box[w-remain ~ w] = height
// if(height%2 == 1) box[0 ~ remain-1] = height, box[remain ~ w] = height-1
int solution(int n, int w, int num)
{
    int answer = 0;
    int remain = n % w;
    int height = 0;
    int box[w];
    if (remain == 0)
        height = n / w;
    else
        height = n / w + 1;
    if (remain == 0)
        for (int i = 0; i < w; i++)
            box[i] = height;
    else
    {
        if (height % 2 == 0)
        {
            for (int i = 0; i < w - remain; i++)
                box[i] = height - 1;
            for (int i = w - remain; i < w; i++)
                box[i] = height;
        }
        else
        {
            for (int i = 0; i < remain; i++)
                box[i] = height;
            for (int i = remain; i < w; i++)
                box[i] = height - 1;
        }
    }

    int box_x;
    int box_y = (num - 1) / w;
    int idx_in_row = (num - 1) % w;

    if (box_y % 2 == 0)
        box_x = idx_in_row;
    else
        box_x = w - 1 - idx_in_row;

    answer = box[box_x] - box_y;
    return answer;
}
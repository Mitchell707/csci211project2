#include <iostream>
using namespace std;

#include "video.h"

int main()
{
    Video video1("Title One", "www.youtube.com/one", "Comment One", 1.1, 2);
    Video video2("Title Two", "www.youtube.com/two", "Comment Two", 2.2, 2);

    video1.print();
    video2.print();

}

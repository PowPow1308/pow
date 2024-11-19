#include <stdio.h>
#include <conio.h>

int main()
{
    printf("hello githup\n");

    // git init : đưa folde thì repo
    // git status : xem trạng thái của repo
    // git add . : là add tất cả các file lên để chuẩn bị lưu
    // git add <tenfile.đuôi> : là add file đó lên để chuẩn bị lưu
    // git reset : để lấy các file ra khỏi repo 
    // git commit -m 'comment' : lưu những file đã add lên với comment
    // git log : xem lại những lần thay đổi 
    // git log --oneline : xem lại những lần thay đổi (ngắn hơn)
    // git checkout <idcomment> : quay lại comment trước đó
    // git checkout <branch name> : đi đến branch <branch name>
    // git branch : xem tên của branch
    // git checkout -b <ten branch> : thoat branch hiện tại và tạo ra một branch mới với <tên branch>
    //----------------------------------
    // + tổng hợp branch lại với nhau 
    // trước tiên : và branch muốn lưu các file vào
    // git merge <ten branch can gọp lại>
    // vd : đang ở branch master vè gõ lệnh "git merge dev" thì dev sẽ được gọp vào master
    //------------------------------------
    // git branch -b <branch.name> : xoá branch

    getch();
    return 0;
}
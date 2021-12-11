#include<iostream>
using namespace std;

int main(){
    int list[6]={5,2,4,6,1,3};
    int key,i,j;
    for(i=1; i<6; i++){
    key = list[i]; // 현재 삽입될 숫자인 i번째 정수를 key 변수로 복사

    // 현재 정렬된 배열은 i-1까지이므로 i-1번째부터 역순으로 조사한다.
    // j 값은 음수가 아니어야 되고
    // key 값보다 정렬된 배열에 있는 값이 크면 j번째를 j+1번째로 이동
    for(j=i-1; j>=0 && list[j]>key; j--){
      list[j+1] = list[j]; // 레코드의 오른쪽으로 이동
    }

    list[j+1] = key;
  }



    for(int k=0;k<6;k++){
        cout<<list[k]<<'\n';
    }
}
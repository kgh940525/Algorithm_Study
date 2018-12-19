//
//  10799.cpp
//  Algorigm_CodingTest
//
//  Created by kgh on 2018. 4. 11..
//  Copyright © 2018년 kgh. All rights reserved.
//
//문제
//여러 개의 쇠막대기를 레이저로 절단하려고 한다. 효율적인 작업을 위해서 쇠막대기를 아래에서 위로 겹쳐 놓고, 레이저를 위에서 수직으로 발사하여 쇠막대기들을 자른다. 쇠막대기와 레이저의 배치는 다음 조건을 만족한다.
//
//쇠막대기는 자신보다 긴 쇠막대기 위에만 놓일 수 있다. - 쇠막대기를 다른 쇠막대기 위에 놓는 경우 완전히 포함되도록 놓되, 끝점은 겹치지 않도록 놓는다.
//각 쇠막대기를 자르는 레이저는 적어도 하나 존재한다.
//레이저는 어떤 쇠막대기의 양 끝점과도 겹치지 않는다.
//아래 그림은 위 조건을 만족하는 예를 보여준다. 수평으로 그려진 굵은 실선은 쇠막대기이고, 점은 레이저의 위치, 수직으로 그려진 점선 화살표는 레이저의 발사 방향이다.
//이러한 레이저와 쇠막대기의 배치는 다음과 같이 괄호를 이용하여 왼쪽부터 순서대로 표현할 수 있다.
//레이저는 여는 괄호와 닫는 괄호의 인접한 쌍 ‘( ) ’ 으로 표현된다. 또한, 모든 ‘( ) ’는 반드시 레이저를 표현한다.
//쇠막대기의 왼쪽 끝은 여는 괄호 ‘ ( ’ 로, 오른쪽 끝은 닫힌 괄호 ‘) ’ 로 표현된다.
//위 예의 괄호 표현은 그림 위에 주어져 있다.
//
//쇠막대기는 레이저에 의해 몇 개의 조각으로 잘려지는데, 위 예에서 가장 위에 있는 두 개의 쇠막대기는 각각 3개와 2개의 조각으로 잘려지고, 이와 같은 방식으로 주어진 쇠막대기들은 총 17개의 조각으로 잘려진다.
//
//쇠막대기와 레이저의 배치를 나타내는 괄호 표현이 주어졌을 때, 잘려진 쇠막대기 조각의 총 개수를 구하는 프로그램을 작성하시오.
#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(void){
    string str;
    int cnt=0;
    cin >> str;
    stack<int> s;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '('){
            
            s.push(i);  // '('가 나왔을 경우 (이 나온 인덱스의 값을 push 해준다.
                        // Why? 인덱스값으로, 레이저인지 쇠막대기인지 구분 해주기 위해서
        }else{
            // 이제 스택에 있는 인덱스 값을 비교 해볼것이다.
            // () 레이저 인것을 확인 하기 위해서.
            if(s.top()+1 == i){
                s.pop();        // pop을 해주는이유는 레이저 인것이 확인 되었기 때문에 stack에서 빼준다.
                // 여기서 왜 size를 해주는거에대한 궁금증이 생겼는데, 그 이유는 레이저가 쇠막대기를 잘라버릴때,
                // 결국 stack에 있는 "("의 개수만큼이 쇠막대기의 개수가 되어서
                cnt += s.size();
            // 레이저가 아니고 ")" 가 나왔을 경우에 레이저 처리가 된것이므로
            // stack에 있던값을 다 빼주고, 이제 ")" 개수만큼이 또 잘려진 쇠막대기의 개수가 되기 때문에
            // cnt +=1 만큼을 해준다.
            }else{
                s.pop();
                cnt += 1;
            }
            
        }
    }
    cout << cnt;
    
}
//    for(int i=0; i<str.size(); i++){
//        if(str[i] == '('){
//
//            cnt++;
//            cout << cnt;
//
//            // 레이저 체크
//            if(str[i+1] ==')'){
//                cout << str[i] <<str[i+1]<< "레이저";
//                cnt--;
//                cout << cnt;
//            }
//        }else if(str[i] == ')'){
//            cnt--;
//        }
//
//
//
//
//
//    }
    
//    // 레이저 체크
//    for(int i=0; str.size(); i++){
//        if(str[i] =='('){
//            // () 인지 확인
//            if(str[i+1] ==')'){
//
//                cout << str[i] <<str[i+1]<< "레이저";
//            }
//            // ()가 아닐경우 쇠막대기 체크하기 위함.
//            else if(str[i+1] == '('){
//
//
//            }
//        }
//
//
//
//    }
    
    // 쇠막대기 체크
    
    
    
    
    
    
    
    
    


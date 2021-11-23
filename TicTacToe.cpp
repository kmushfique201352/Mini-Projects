#include <iostream>
#include<cmath>
#include<iomanip>
#include<bits/stdc++.h>
#include<windows.h>
#include<direct.h>
using namespace std;

string x[9]={" "," "," "," "," "," "," "," "," "},ask;
int a,s,b,flag=0,p=1,g=1,gone=0,c=9,wx=0,wo=0,mum1=0x04,mum2=0x04,mum3=0x04,mum4=0x04,mum5=0x04,mum6=0x04,mum7=0x04,mum8=0x04,mum9=0x04;

void setcolor(unsigned char color){
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void start(){
  setcolor( 0x02 );
  system("cls");
  cout<<endl<<endl<<"\t\t\t\t\t------------Tic-Tac-Toe game-"<<g<<"-----------"<<endl<<endl<<endl;
  cout<<endl<<"\t\t\t\t\t\t\t1.Play Game"<<endl;
  cout<<endl<<"\t\t\t\t\t\t\t2.Exit Game"<<endl;
}

void fix(){
  if(flag==0){
    if(a==1){
      if(x[0]=="O"||x[0]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
        x[0]="X";
        flag++;
      }
    }else if(a==2){
      if(x[1]=="O"||x[1]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[1]="X";
      flag++;
    }
    }else if(a==3){
      if(x[2]=="O"||x[2]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[2]="X";
      flag++;
    }
    }else if(a==4){
      if(x[3]=="O"||x[3]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[3]="X";
      flag++;
    }
    }else if(a==5){
      if(x[4]=="O"||x[4]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[4]="X";
      flag++;
    }
    }else if(a==6){
      if(x[5]=="O"||x[5]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[5]="X";
      flag++;
    }
    }else if(a==7){
      if(x[6]=="O"||x[6]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[6]="X";
      flag++;
    }
    }else if(a==8){
      if(x[7]=="O"||x[7]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
    }else{
      x[7]="X";
      flag++;
    }
    }else if(a==9){
      if(x[8]=="O"||x[8]=="X"){
        c++;
        cout<<"Invalid"<<endl;
        flag==0;
      }else{
      x[8]="X";
      flag++;
    }
    }
  }else{
    if(b==1){
      if(x[0]=="X"||x[0]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[0]="O";
      flag--;
    }
    }else if(b==2){
      if(x[1]=="X"||x[1]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[1]="O";
      flag--;
    }
    }else if(b==3){
      if(x[2]=="X"||x[2]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[2]="O";
      flag--;
    }
    }else if(b==4){
      if(x[3]=="X"||x[3]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[3]="O";
      flag--;
    }
    }else if(b==5){
      if(x[4]=="X"||x[4]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[4]="O";
      flag--;
    }
    }else if(b==6){
      if(x[5]=="X"||x[5]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[5]="O";
      flag--;
    }
    }else if(b==7){
      if(x[6]=="X"||x[6]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[6]="O";
      flag--;
    }
    }else if(b==8){
      if(x[7]=="X"||x[7]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[7]="O";
      flag--;
    }
    }else if(b==9){
      if(x[8]=="X"||x[8]=="O"){
        c++;
        cout<<"Invalid"<<endl;
        flag==1;
      }else{
      x[8]="O";
      flag--;
    }
    }
  }
}

void table(){
    if(wx==0){
      if(wo==0){
        fix();
      }
    }

  setcolor( 0x02 );
  if(wx==0){
    if(wo==0){
      cout<<endl<<endl<<"\t\t\t\t\t------------Round-"<<p<<"-----------"<<endl<<endl<<endl;
    }
  }else if(wx==1){
    cout<<endl<<"\t\t\t\t\t\tA is the winner"<<endl<<endl;
  }else if(wo==1){
    cout<<endl<<"\t\t\t\t\t\tB is the winner"<<endl<<endl;
  }
  cout<<"\t\t\t\t        -------------------------------"<<endl;
  cout<<"\t\t\t\t\t           |       |            "<<endl;
  cout<<"\t\t\t\t\t           |       |            "<<endl;
  cout<<"\t\t\t\t\t      ";
    setcolor( mum1 );
  cout<<x[0];
  setcolor( 0x02 );
  cout<<"    |   ";
    setcolor( mum2 );
  cout<<x[1];
  setcolor( 0x02 );
  cout<<"   |    ";
    setcolor( mum3 );
  cout<<x[2];
  setcolor( 0x02 );
  cout<<"   "<<endl;
  cout<<"\t\t\t\t\t___________|_______|___________"<<endl;
  cout<<"\t\t\t\t\t           |       |            "<<endl;
    setcolor( mum4 );
  cout<<"\t\t\t\t\t      "<<x[3];
  setcolor( 0x02 );
  cout<<"    |   ";
    setcolor( mum5 );
  cout<<x[4];
  setcolor( 0x02 );
  cout<<"   |    ";
  setcolor( mum6 );
  cout<<x[5];
  setcolor( 0x02 );
  cout<<endl<<"\t\t\t\t\t___________|_______|___________"<<endl;
  cout<<"\t\t\t\t\t           |       |            "<<endl;
  setcolor( mum7 );
  cout<<"\t\t\t\t\t      "<<x[6];
  setcolor( 0x02 );
  cout<<"    |   ";
  setcolor( mum8 );
  cout<<x[7];
  setcolor( 0x02 );
  cout<<"   |    ";
  setcolor( mum9 );
  cout<<x[8];
  setcolor( 0x02 );
  cout<<endl<<"\t\t\t\t\t           |       |            "<<endl;
  cout<<"\t\t\t\t\t           |       |            "<<endl;
  cout<<"\t\t\t\t        -------------------------------"<<endl<<endl<<endl;
  p++;

}

void blink(){
  if(wx==1){
      if (x[0]=="X" && x[1]=="X" && x[2]=="X"){
        for(int w=0;w<=3;w++){
          mum1=0x06;
          mum2=0x06;
          mum3=0x06;
          system("cls");
          table();
          Sleep(500);
          mum1=0x04;
          mum2=0x04;
          mum3=0x04;
          system("cls");
          table();
        }
      }else if (x[3]=="X" && x[4]=="X" && x[5]=="X"){
        for(int w=0;w<=3;w++){
          mum4=0x06;
          mum5=0x06;
          mum6=0x06;
          system("cls");
          table();
          Sleep(500);
          mum4=0x04;
          mum5=0x04;
          mum6=0x04;
          system("cls");
          table();
        }
      }else if (x[6]=="X" && x[7]=="X" && x[8]=="X"){
        for(int w=0;w<=3;w++){
          mum7=0x06;
          mum8=0x06;
          mum9=0x06;
          system("cls");
          table();
          Sleep(500);
          mum7=0x04;
          mum8=0x04;
          mum9=0x04;
          system("cls");
          table();
        }
      }else if (x[0]=="X" && x[3]=="X" && x[6]=="X"){
        for(int w=0;w<=3;w++){
          mum1=0x06;
          mum4=0x06;
          mum7=0x06;
          system("cls");
          table();
          Sleep(500);
          mum1=0x04;
          mum4=0x04;
          mum7=0x04;
          system("cls");
          table();
        }
      }else if (x[1]=="X" && x[4]=="X" && x[7]=="X"){
        for(int w=0;w<=3;w++){
          mum2=0x06;
          mum5=0x06;
          mum8=0x06;
          system("cls");
          table();
          Sleep(500);
          mum2=0x04;
          mum5=0x04;
          mum8=0x04;
          system("cls");
          table();
        }
      }else if (x[2]=="X" && x[5]=="X" && x[8]=="X"){
        for(int w=0;w<=3;w++){
          mum3=0x06;
          mum6=0x06;
          mum9=0x06;
          system("cls");
          table();
          Sleep(500);
          mum3=0x04;
          mum6=0x04;
          mum9=0x04;
          system("cls");
          table();
        }
      }else if (x[0]=="X" && x[4]=="X" && x[8]=="X"){
        for(int w=0;w<=3;w++){
          mum1=0x06;
          mum5=0x06;
          mum9=0x06;
          system("cls");
          table();
          Sleep(500);
          mum1=0x04;
          mum5=0x04;
          mum9=0x04;
          system("cls");
          table();
        }
      }else if (x[2]=="X" && x[4]=="X" && x[6]=="X"){
        for(int w=0;w<=3;w++){
          mum3=0x06;
          mum5=0x06;
          mum7=0x06;
          system("cls");
          table();
          Sleep(500);
          mum3=0x04;
          mum5=0x04;
          mum7=0x04;
          system("cls");
          table();
        }
      }
  }
  if(wo==1){
      if (x[0]=="O" && x[1]=="O" && x[2]=="O"){
        for(int w=0;w<=3;w++){
          mum1=0x06;
          mum2=0x06;
          mum3=0x06;
          system("cls");
          table();
          Sleep(500);
          mum1=0x04;
          mum2=0x04;
          mum3=0x04;
          system("cls");
          table();
        }
      }else if (x[3]=="O" && x[4]=="O" && x[5]=="O"){
        for(int w=0;w<=3;w++){
          mum4=0x06;
          mum5=0x06;
          mum6=0x06;
          system("cls");
          table();
          Sleep(500);
          mum4=0x04;
          mum5=0x04;
          mum6=0x04;
          system("cls");
          table();
        }
      }else if (x[6]=="O" && x[7]=="O" && x[8]=="O"){
        for(int w=0;w<=3;w++){
          mum7=0x06;
          mum8=0x06;
          mum9=0x06;
          system("cls");
          table();
          Sleep(500);
          mum7=0x04;
          mum8=0x04;
          mum9=0x04;
          system("cls");
          table();
        }
      }else if (x[0]=="O" && x[3]=="O" && x[6]=="O"){
        for(int w=0;w<=3;w++){
          mum1=0x06;
          mum4=0x06;
          mum7=0x06;
          system("cls");
          table();
          Sleep(500);
          mum1=0x04;
          mum4=0x04;
          mum7=0x04;
          system("cls");
          table();
        }
      }else if (x[1]=="O" && x[4]=="O" && x[7]=="O"){
        for(int w=0;w<=3;w++){
          mum2=0x06;
          mum5=0x06;
          mum8=0x06;
          system("cls");
          table();
          Sleep(500);
          mum2=0x04;
          mum5=0x04;
          mum8=0x04;
          system("cls");
          table();
        }
      }else if (x[2]=="O" && x[5]=="O" && x[8]=="O"){
        for(int w=0;w<=3;w++){
          mum3=0x06;
          mum6=0x06;
          mum9=0x06;
          system("cls");
          table();
          Sleep(500);
          mum3=0x04;
          mum6=0x04;
          mum9=0x04;
          system("cls");
          table();
        }
      }else if (x[0]=="O" && x[4]=="O" && x[8]=="O"){
        for(int w=0;w<=3;w++){
          mum1=0x06;
          mum5=0x06;
          mum9=0x06;
          system("cls");
          table();
          Sleep(500);
          mum1=0x04;
          mum5=0x04;
          mum9=0x04;
          system("cls");
          table();
        }
      }else if (x[2]=="O" && x[4]=="O" && x[6]=="O"){
        for(int w=0;w<=3;w++){
          mum3=0x06;
          mum5=0x06;
          mum7=0x06;
          system("cls");
          table();
          Sleep(500);
          mum3=0x04;
          mum5=0x04;
          mum7=0x04;
          system("cls");
          table();
        }
      }
  }
}

void win(){
  for(int o=0;o<=c-1;o++){
    if( (x[0]=="X" && x[1]=="X" && x[2]=="X")||(x[3]=="X" && x[4]=="X" && x[5]=="X")||(x[6]=="X" && x[7]=="X" && x[8]=="X")||(x[0]=="X" && x[3]=="X" && x[6]=="X")||(x[1]=="X" && x[4]=="X" && x[7]=="X")||(x[2]=="X" && x[5]=="X" && x[8]=="X")||(x[0]=="X" && x[4]=="X" && x[8]=="X")||(x[2]=="X" && x[4]=="X" && x[6]=="X") ){
      wx=1;
      blink();
        gone++;
      break;
  }else if( (x[0]=="O" && x[1]=="O" && x[2]=="O")||(x[3]=="O" && x[4]=="O" && x[5]=="O")||(x[6]=="O" && x[7]=="O" && x[8]=="O")||(x[0]=="O" && x[3]=="O" && x[6]=="O")||(x[1]=="O" && x[4]=="O" && x[7]=="O")||(x[2]=="O" && x[5]=="O" && x[8]=="O")||(x[0]=="O" && x[4]=="O" && x[8]=="O")||(x[2]=="O" && x[4]=="O" && x[6]=="O") ){
    wo=1;
    blink();
      gone++;
    break;
  }
}
}



int main() {
  for(int kk=s;;kk++){
    start();
    int inp;
    cin>>inp;
    if(inp==1){
      g++;
      system("cls");
      table();
      for(int i=1;i<=c;i++){
        if(flag==0){
          setcolor( 0x06 );
          cout<<endl<<"\t\t\t\t    Player A your turn, give your input:   ";
          cin>>a;
          system("cls");
          table();
          win();
          if(gone!=0){
            break;
          }
        }else{
          setcolor( 0x06 );
          cout<<endl<<"\t\t\t\t    Player B your turn, give your input:   ";
          cin>>b;
          system("cls");
          table();
          win();
          if(gone!=0){
            break;
          }
        }
      }
      if(gone==0){
        setcolor( 0x06 );
        cout<<endl<<"\t\t\t\t\t\tMatch draw"<<endl;
      }
    }else if(inp==2){
      system("cls");
      cout<<endl<<endl<<endl<<"\t\t\t\t\t\t Thank you for Playing"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
      break;
    }
  }

  return 0;
}

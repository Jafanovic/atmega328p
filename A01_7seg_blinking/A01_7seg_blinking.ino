/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
  https://create.arduino.cc/projecthub/aboda243/get-started-with-seven-segment-c73200
  This example code is in the public domain.

  Note:
  Youtube VSCODE + Arduino setting: 
  https://www.youtube.com/watch?v=VfLTZcKCGfk&ab_channel=MaximilianHagelstam
 */


#define led2_a    6
#define led2_b    7
#define led2_c    8
#define led2_d    5
#define led2_e    4
#define led2_f   19
#define led2_g   18
#define led2_dp   9

#define led1_a   12     
#define led1_b   17  
#define led1_c   14  
#define led1_d   10     
#define led1_e   11     
#define led1_f   16  
#define led1_g   15  
#define led1_dp   3   

#define common_cathode 0
#define common_anode 1
bool segMode = common_anode; // set this to your segment type, my segment is common_cathode

int seg1[] {led1_a, led1_b, led1_c ,led1_d, led1_e, led1_f, led1_g, led1_dp}; // segment pins
int seg2[] {led2_a, led2_b, led2_c ,led2_d, led2_e, led2_f, led2_g, led2_dp};

byte chars = 35; // max value in the array "Chars"
byte Chars[35][9] { 
           {'0',1,1,1,1,1,1,0,0},//0
           {'1',0,1,1,0,0,0,0,0},//1
           {'2',1,1,0,1,1,0,1,0},//2
           {'3',1,1,1,1,0,0,1,0},//3
           {'4',0,1,1,0,0,1,1,0},//4
           {'5',1,0,1,1,0,1,1,0},//5
           {'6',1,0,1,1,1,1,1,0},//6
           {'7',1,1,1,0,0,0,0,0},//7
           {'8',1,1,1,1,1,1,1,0},//8
           {'9',1,1,1,1,0,1,1,0},//9
           {'a',1,1,1,0,1,1,1,0},//A/10
           {'b',0,0,1,1,1,1,1,0},//b/11
           {'c',1,0,0,1,1,1,0,0},//C/12
           {'d',0,1,1,1,1,0,1,0},//d/13
           {'e',1,0,0,1,1,1,1,0},//E/14
           {'f',1,0,0,0,1,1,1,0},//F/15
           {'g',1,0,1,1,1,1,0,0},//G/16
           {'h',0,1,1,0,1,1,1,0},//H/17
           {'i',0,0,0,0,1,1,0,0},//I/18
           {'j',0,1,1,1,1,0,0,0},//J/19
           {'l',0,0,0,1,1,1,0,0},//L/20
           {'n',0,0,1,0,1,0,1,0},//n/21
           {'o',0,0,1,1,1,0,1,0},//o/22
           {'p',1,1,0,0,1,1,1,0},//P/23
           {'q',1,1,1,0,0,1,1,0},//q/24
           {'r',0,0,0,0,1,0,1,0},//r/25
           {'s',1,0,1,1,0,1,1,0},//S/26   looks like number 5
           {'t',0,0,0,1,1,1,1,0},//t/27
           {'u',0,1,1,1,1,1,0,0},//U/28
           {'y',0,1,1,1,0,1,1,0},//y/29
           {'-',0,0,0,0,0,0,1,0},//-/30
           {'.',0,0,0,0,0,0,0,1},//./31
           {']',1,1,1,1,0,0,0,0},//]/32
           {'[',1,0,0,1,1,1,0,0},//[/33
           {'_',0,0,0,1,0,0,0,0},//_/34
           };

// the setup routine runs once when you press reset:
void setup() { 
  // set segment pins as OUTPUT               
  pinMode(led2_a,  OUTPUT);  
  pinMode(led2_b,  OUTPUT);     
  pinMode(led2_c,  OUTPUT); 
  pinMode(led2_d,  OUTPUT);
  pinMode(led2_e,  OUTPUT); 
  pinMode(led2_f,  OUTPUT); 
  pinMode(led2_g,  OUTPUT);
  pinMode(led2_dp, OUTPUT); 

  pinMode(led1_a,  OUTPUT);  
  pinMode(led1_b,  OUTPUT);
  pinMode(led1_c,  OUTPUT);
  pinMode(led1_d,  OUTPUT); 
  pinMode(led1_e,  OUTPUT); 
  pinMode(led1_f,  OUTPUT); 
  pinMode(led1_g,  OUTPUT); 
  pinMode(led1_dp, OUTPUT);
   
}


void setState(bool mode){  //sets the hole segment state to "mode"
  for(int i = 0;i<=6;i++){
    digitalWrite(seg1[i],mode);
  }
}

void Print(char Char){  // print any character on the segment 
                        // ( Note : you can't use capital characters )
  int charNum = -1;     // set search resault to -1
  setState(segMode);    // turn off the segment

  for(int i = 0; i < chars ;i++){   // search for the enterd character
    if(Char == Chars[i][0]){        // if the character found
      charNum = i;                  // set the resault number into charNum 
                                    // ( because this function prints the 
                                    // character using it's number in the array )
    }
  }
 
  if(charNum == -1 ){     // if the character not found
    for(int i = 0;i <= 6;i++){
      digitalWrite(seg1[i],HIGH);
      delay(100);
      digitalWrite(seg1[i],LOW);
    }
    for(int i = 0;i <= 2;i++){
      delay(100);
      setState(HIGH);
      delay(100);
      setState(LOW); 
    }
  } else{ // else if the character found print it    
      for(int i = 0;i<8;i++){
        digitalWrite(seg1[i],Chars[charNum][i+1]);
      }
    }
}

void Print(int num){ // print any number on the segment
  setState(segMode); //turn off the segment
 
  if(num > chars || num < 0 ){  // if the number is not declared  
    for(int i = 0;i <= 6;i++){
      digitalWrite(seg1[i],HIGH);
      delay(100);
      digitalWrite(seg1[i],LOW);
    }
    for(int i = 0;i <= 2;i++){
      delay(100);
      setState(HIGH);
      delay(100);
      setState(LOW); 
    }
  }else{              // else if the number declared, print it
    if(segMode == 0){ // for segment mode
      for(int i = 0;i<8;i++){
        digitalWrite(seg1[i],Chars[num][i+1]);
      }
    } else{
        for(int i = 0;i<8;i++){
          digitalWrite(seg1[i],!Chars[num][i+1]);
        }
      }
  }
}

void loop(){  
  for(int i = 0;i < chars;i++){ //print  
    Print(i);
    delay(1000);
  }
  //Print(number or character); 
  // print any number or character on the segment 
  // ( Note : you can't use capital characters )
  // setState(state); 
  //sets the hole segment state to "state"
}

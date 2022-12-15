
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int led = 8;
int led2 = 8;

void setup() {                
  pinMode(led, OUTPUT); 
  char *s = morsefy("teste");
   interpret(s);  
}
void loop(){


}



char* morsefy(char *s){
  char* f = (char*)malloc(150*sizeof(char));
  for(int i = 0; i < strlen(s); i += 1){
    switch(s[i]){
    case 'a':
      strcat(f,".-");
      break;
    case 'b':
      strcat(f,"-...");
      break;
    case 'c':
      strcat(f,"-.-.");
      break;
    case 'd':
      strcat(f,"-..");
      break;
    case 'e':
      strcat(f,".");
      break;
    case 'f':
      strcat(f,"..-.");
      break;
    case 'g':
      strcat(f,"--.");
      break;
    case 'h':
      strcat(f,"-.-");
      break;
    case 'i':
      strcat(f,"..");
      break;
    case 'j':
      strcat(f,".---");
      break;
    case 'k':
      strcat(f,"-.-");
      break;
    case 'l':
      strcat(f,".-..");
      break;
    case 'm':
      strcat(f,"--");
      break;
    case 'n':
      strcat(f,"-.");
      break;
    case 'o':
      strcat(f,"---");
      break;          
    case 'p':
      strcat(f,".--.");
      break;          
    case 'q':
      strcat(f,"--.-");
      break;          
    case 'r':
      strcat(f,".-.");
      break;          
    case 's':
      strcat(f,"...");
      break;         
    case 't':
      strcat(f,"-");
      break;         
    case 'u':
      strcat(f,"..-");
      break;         
    case 'v':
      strcat(f,"...-");
      break;         
    case 'w':
      strcat(f,".--");
      break;         
    case 'x':
      strcat(f,"-..-");
      break;         
    case 'y':
      strcat(f,"-.--");
      break;          
    case 'z':
      strcat(f,"--..");
      break;

    }
    strcat(f," ");
  }
  return f;
}
void interpret(char* s){
  int h = 300;
  for(int i = 0; i < strlen(s); i += 1){
    if(s[i] == '.'){
      digitalWrite(led, HIGH);  
      delay(h);
    }

    else if(s[i] == '-'){
      digitalWrite(led, HIGH);
      delay(h * 3);
    }

    else
    {
      digitalWrite(led, LOW);
      delay(h * 5);
    }

    digitalWrite(led, LOW);
    delay(h);
  }
}

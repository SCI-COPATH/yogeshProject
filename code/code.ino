#define CLUCH 11
#define BREAK 10

#define MAIN A0

#define ON_DELAY 5000
#define OFF_DELAY 3000
boolean status =0;
void setup(){
    pinMode(CLUCH,OUTPUT);
    pinMode(BREAK,OUTPUT);
    pinMode(MAIN,INPUT);
}
void loop(){

    if(digitalRead(MAIN)==LOW&&status==0){
        digitalWrite(CLUCH,HIGH);
        digitalWrite(BREAK,HIGH);
        status=1;
        delay(ON_DELAY);
        digitalWrite(CLUCH,LOW);
    }else if(digitalRead(MAIN)==HIGH&&status==1){
        delay(OFF_DELAY);
        digitalWrite(BREAK,LOW);
        status=0;
    }
}
unsigned A ;
unsigned B ;
unsigned int time1 ;
unsigned int time2 ;
char i=0 ;
void config(){
Intcon=0xc0 ;
T1con=0x30 ;
ccp1con=0x04 ;
}
void capturstart(){
pie1=0x40 ;
TMR1on_bit=1 ;
}
void interrupt (){
i++ ;
if(i==1) ;
time1=ccpr1l+(ccpr1h*256) ;
if(i==2) ;
time2=ccpr1l+(ccpr1h*256) ;
TMR1on_bit=0 ;
 }
void main() {
  T1CON = 1 ;
PIR1.TMR1IF = 0 ;
 pir1=0x04 ;
 config();
 if(i==2) ;
 A=time2-time1 ;
 B=A*0.4 ;
 }

/*************************************************************************
**                                                                      **
**                 Descripció programa                                  **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

int num;
const int llum[8] = {13, 12, 11, 10, 9, 8, 7, 6};

//*******  Setup  ********************************************************
void setup ()
{
  pinMode(llum[0], OUTPUT);
  pinMode(llum[1], OUTPUT);
  pinMode(llum[2], OUTPUT);
  pinMode(llum[3], OUTPUT);
  pinMode(llum[4], OUTPUT);
  pinMode(llum[5], OUTPUT);
  pinMode(llum[6], OUTPUT);
  pinMode(llum[7], OUTPUT);
  
  Serial.begin(9600);  
  Serial.println("Entrar un numero del 0 al 9"); 
}

//******  Loop  **********************************************************
void loop ()
{
  {
  while (Serial.available() > 0) {  
  num = Serial.parseInt(); 
  Serial.println(num);
    switch (num)
    {
    case 0:
      {
      num0();
      break;
      }
    
    case 1:
      {
      num1();
      break;
      }
    
    case 2:
      {  
      num2();
      break;
      }
    
    case 3:
      {
      num3();
      break;
      }
    
    case 4:
      {
      num4();
      break;
      }
    
    case 5:
      {
      num5();
      break;
      }
    
    case 6:
      {
      num6();
      break;
      }
    
    case 7:
      {
      num7();
      break;
      }
    
    case 8:
      {
      num8();
      break;
      }
    
    case 9:
      {
      num9();
      break;
      }
    default:
      {
      defecte();
      break;
      }
    }
    Serial.read() == '\n';
    Serial.println("");
    Serial.println("Entrar un numero del 0 al 9");
  }
  }
}
void num0()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], LOW);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], HIGH);  
 digitalWrite(llum[7], HIGH);  
}

void num1()
{
 digitalWrite(llum[0], HIGH);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], HIGH);  
 digitalWrite(llum[4], HIGH);  
 digitalWrite(llum[5], HIGH);  
 digitalWrite(llum[6], HIGH);  
 digitalWrite(llum[7], HIGH);  
}

void num2()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], HIGH);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], LOW);  
 digitalWrite(llum[5], HIGH);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
}

void num3()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], HIGH);  
 digitalWrite(llum[5], HIGH);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
} 

void num4()
{
 digitalWrite(llum[0], HIGH);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], HIGH);  
 digitalWrite(llum[4], HIGH);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
} 

void num5()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], HIGH);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], HIGH);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
}

void num6()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], HIGH);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], LOW);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
}

void num7()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], HIGH);  
 digitalWrite(llum[4], HIGH);  
 digitalWrite(llum[5], HIGH);  
 digitalWrite(llum[6], HIGH);  
 digitalWrite(llum[7], HIGH);  
}

void num8()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], LOW);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
}

void num9()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], HIGH);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], HIGH);  
}
void defecte()
{
 digitalWrite(llum[0], LOW);
 digitalWrite(llum[1], LOW);  
 digitalWrite(llum[2], LOW);  
 digitalWrite(llum[3], LOW);  
 digitalWrite(llum[4], LOW);  
 digitalWrite(llum[5], LOW);  
 digitalWrite(llum[6], LOW);  
 digitalWrite(llum[7], LOW);  
}

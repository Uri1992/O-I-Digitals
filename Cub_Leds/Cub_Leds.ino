/*************************************************************************
**                                                                      **
**                 Cub de leds amb combinacions de llum                 **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

const int col[9] = {12, 11, 10, 9, 8, 7, 6, 5, 4};
const int pis[3] = {3, 2, 1};
const int temps = 100;

//*******  Setup  ********************************************************
void setup()
{
  pinMode(col[0], OUTPUT);
  pinMode(col[1], OUTPUT);
  pinMode(col[2], OUTPUT);
  pinMode(col[3], OUTPUT);
  pinMode(col[4], OUTPUT);
  pinMode(col[5], OUTPUT);
  pinMode(col[6], OUTPUT);
  pinMode(col[7], OUTPUT);
  pinMode(col[8], OUTPUT);
  
  pinMode(pis[0], OUTPUT);
  pinMode(pis[1], OUTPUT);
  pinMode(pis[2], OUTPUT);
}
//******  Loop  **********************************************************
void loop ()
{
  amunt();
  amunt();
  
  tiraAmunt();
  tiraAmunt();
  
  avall();
  avall(); 
  
  tiraAvall();
  tiraAvall();
  
  escala();
  escala();
  
  cercle();
  cercle();
  
  tornadoInvertit();
  tornadoInvertit();
  tornadoInvertit();
  tornadoInvertit();
  
  tornado();
  tornado();
  tornado();
  tornado();
  tornado();
  tornado();
  tornado();
  tornado();
  
  diana();
  diana();
  
  quadrat();
  quadrat();
  
  creu();
  creu();
  
  esquerra();
  dreta();
  esquerra();
  dreta();
  
  intermitent();
  intermitent();
}

void avall()
{
  digitalWrite(col[0], HIGH);
  digitalWrite(col[1], HIGH);
  digitalWrite(col[2], HIGH);
  digitalWrite(col[3], HIGH);
  digitalWrite(col[4], HIGH);
  digitalWrite(col[5], HIGH);
  digitalWrite(col[6], HIGH);
  digitalWrite(col[7], HIGH);
  digitalWrite(col[8], HIGH);
  
  for (int i = 0; i < 3; i++)
    {
    digitalWrite(pis[i], HIGH);
    delay(temps);
    }
  
  for (int i = 2 ; i >= 0; i--)
    {
    digitalWrite(pis[i], LOW);
    delay(temps);
    }
}

void amunt()
{
  digitalWrite(col[0], HIGH);
  digitalWrite(col[1], HIGH);
  digitalWrite(col[2], HIGH);
  digitalWrite(col[3], HIGH);
  digitalWrite(col[4], HIGH);
  digitalWrite(col[5], HIGH);
  digitalWrite(col[6], HIGH);
  digitalWrite(col[7], HIGH);
  digitalWrite(col[8], HIGH);
  
  for (int i = 3; i > 0; i--)
    {
    digitalWrite(pis[i-1], HIGH);
    delay(temps);
    }
  
  for (int i = 0; i < 3; i++)
    {
    digitalWrite(pis[i], LOW);
    delay(temps);
    }
}

void intermitent()
{
  digitalWrite(col[0], HIGH);
  digitalWrite(col[1], HIGH);
  digitalWrite(col[2], HIGH);
  digitalWrite(col[3], HIGH);
  digitalWrite(col[4], HIGH);
  digitalWrite(col[5], HIGH);
  digitalWrite(col[6], HIGH);
  digitalWrite(col[7], HIGH);
  digitalWrite(col[8], HIGH);
  digitalWrite(pis[0], HIGH);
  digitalWrite(pis[1], HIGH);
  digitalWrite(pis[2], HIGH);

  delay(1000);
 
  digitalWrite(pis[0], LOW);
  digitalWrite(pis[1], LOW);
  digitalWrite(pis[2], LOW);
  delay(1000);
}

void escala()
{
   for (int ipis = 0; ipis < 2; ipis++)
   {
     digitalWrite(pis[ipis], HIGH);
     digitalWrite(col[0], HIGH);
     for (int i = 1; i < 9; i++)
      {
      digitalWrite(col[i], HIGH);
      delay(temps);
      digitalWrite(col[i], LOW);
      }  
     digitalWrite(pis[ipis], LOW); 
   }  
   
   for (int ipis = 2; ipis > 0; ipis--)
   {
     digitalWrite(pis[ipis], HIGH);
     digitalWrite(col[0], HIGH);
     for (int i = 1; i < 9; i++)
      {
      digitalWrite(col[i], HIGH);
      delay(temps);
      digitalWrite(col[i], LOW);
      }  
     digitalWrite(pis[ipis], LOW); 
   }     
}

void tornado()
{
  digitalWrite(pis[0], HIGH);
  digitalWrite(pis[1], HIGH);
  digitalWrite(pis[2], HIGH);
  
  for (int i = 1; i < 9; i++)
    {
    digitalWrite(col[i], HIGH);
    digitalWrite(col[i+4], HIGH);
    digitalWrite(col[i-4], HIGH);
    delay(temps);
    digitalWrite(col[i], LOW);
    digitalWrite(col[i+4], LOW);
    digitalWrite(col[i-4], LOW);
    digitalWrite(col[0], HIGH);
    }  
}

void creu()
{
  digitalWrite(pis[0], HIGH);
  digitalWrite(pis[1], HIGH);
  digitalWrite(pis[2], HIGH);
  
  for (int i = 1; i < 3; i++)
    {
    digitalWrite(col[i], HIGH);
    digitalWrite(col[i+2], HIGH);
    digitalWrite(col[i+6], HIGH);
    digitalWrite(col[i+4], HIGH);
    delay(1000);
    digitalWrite(col[i], LOW);
    digitalWrite(col[i+2], LOW);
    digitalWrite(col[i+6], LOW);
    digitalWrite(col[i+4], LOW);
    digitalWrite(col[0], HIGH);
    }  
}

void quadrat()
{
  digitalWrite(pis[0], HIGH);
  digitalWrite(pis[1], HIGH);
  digitalWrite(pis[2], HIGH);
  
  for (int i = 1; i < 3; i++)
    {
    digitalWrite(col[i], HIGH);
    digitalWrite(col[i+2], HIGH);
    digitalWrite(col[i+6], HIGH);
    digitalWrite(col[i+4], HIGH);
    delay(1000);
    digitalWrite(col[i], LOW);
    digitalWrite(col[i+2], LOW);
    digitalWrite(col[i+6], LOW);
    digitalWrite(col[i+4], LOW);
    }  
}

void cercle()
{
   digitalWrite(pis[0], HIGH);
   digitalWrite(pis[1], HIGH);
   digitalWrite(pis[2], HIGH);
   
   for (int i = 1; i < 9; i++)
      {
      digitalWrite(col[i], HIGH);
      delay(temps);
      }  
      
   for (int i = 1; i < 9; i++)
      {
      digitalWrite(col[i], LOW);
      delay(temps);   
      }  
}

void tornadoInvertit()
{
   digitalWrite(pis[0], HIGH);
   digitalWrite(pis[1], HIGH);
   digitalWrite(pis[2], HIGH);
   
   for (int i = 1; i < 9; i++)
      {
      digitalWrite(col[i], LOW);
      digitalWrite(col[0], HIGH);
      delay(temps);
      digitalWrite(col[i], HIGH);
      }   
}

void esquerra()
{
   digitalWrite(pis[0], HIGH);
   digitalWrite(pis[1], HIGH);
   digitalWrite(pis[2], HIGH);
   
   digitalWrite(col[1], HIGH);
   digitalWrite(col[2], HIGH);
   digitalWrite(col[8], HIGH);
   delay(temps);
   digitalWrite(col[0], HIGH);
   digitalWrite(col[3], HIGH);
   digitalWrite(col[7], HIGH);
   delay(temps);
   digitalWrite(col[4], HIGH);
   digitalWrite(col[5], HIGH);
   digitalWrite(col[6], HIGH);
   delay(temps);
   digitalWrite(col[4], LOW);
   digitalWrite(col[5], LOW);
   digitalWrite(col[6], LOW);
   delay(temps);
   digitalWrite(col[0], LOW);
   digitalWrite(col[3], LOW);
   digitalWrite(col[7], LOW);
   delay(temps);
   digitalWrite(col[1], LOW);
   digitalWrite(col[2], LOW);
   digitalWrite(col[8], LOW);
   delay(temps);
}

void dreta()
{
   digitalWrite(pis[0], HIGH);
   digitalWrite(pis[1], HIGH);
   digitalWrite(pis[2], HIGH);
   
   digitalWrite(col[4], HIGH);
   digitalWrite(col[5], HIGH);
   digitalWrite(col[6], HIGH);
   delay(temps);
   digitalWrite(col[0], HIGH);
   digitalWrite(col[3], HIGH);
   digitalWrite(col[7], HIGH);
   delay(temps);
   digitalWrite(col[1], HIGH);
   digitalWrite(col[2], HIGH);
   digitalWrite(col[8], HIGH);
   delay(temps);
   digitalWrite(col[1], LOW);
   digitalWrite(col[2], LOW);
   digitalWrite(col[8], LOW);
   delay(temps);
   digitalWrite(col[0], LOW);
   digitalWrite(col[3], LOW);
   digitalWrite(col[7], LOW);
   delay(temps);
   digitalWrite(col[4], LOW);
   digitalWrite(col[5], LOW);
   digitalWrite(col[6], LOW);
   delay(temps);
}

void diana()
{
   digitalWrite(pis[0], HIGH);
   digitalWrite(pis[1], HIGH);
   digitalWrite(pis[2], HIGH);
   
   digitalWrite(col[0], HIGH);
   delay(temps*5);
   digitalWrite(col[0],LOW);
   digitalWrite(col[1], HIGH);
   digitalWrite(col[2], HIGH);
   digitalWrite(col[3], HIGH);
   digitalWrite(col[4], HIGH);
   digitalWrite(col[5], HIGH);
   digitalWrite(col[6], HIGH);
   digitalWrite(col[7], HIGH);
   digitalWrite(col[8], HIGH);
   delay(temps*5);
   digitalWrite(col[1], LOW);
   digitalWrite(col[2], LOW);
   digitalWrite(col[3], LOW);
   digitalWrite(col[4], LOW);
   digitalWrite(col[5], LOW);
   digitalWrite(col[6], LOW);
   digitalWrite(col[7], LOW);
   digitalWrite(col[8], LOW);
}

void tiraAvall()
{
  digitalWrite(col[0], HIGH);
  digitalWrite(col[1], HIGH);
  digitalWrite(col[2], HIGH);
  digitalWrite(col[3], HIGH);
  digitalWrite(col[4], HIGH);
  digitalWrite(col[5], HIGH);
  digitalWrite(col[6], HIGH);
  digitalWrite(col[7], HIGH);
  digitalWrite(col[8], HIGH);
  
  for (int i = 0; i < 3; i++)
    {
    digitalWrite(pis[i], HIGH);
    delay(temps);
    }
  
  for (int i = 0 ; i < 3; i++)
    {
    digitalWrite(pis[i], LOW);
    delay(temps);
    }
}

void tiraAmunt()
{
  digitalWrite(col[0], HIGH);
  digitalWrite(col[1], HIGH);
  digitalWrite(col[2], HIGH);
  digitalWrite(col[3], HIGH);
  digitalWrite(col[4], HIGH);
  digitalWrite(col[5], HIGH);
  digitalWrite(col[6], HIGH);
  digitalWrite(col[7], HIGH);
  digitalWrite(col[8], HIGH);
  
  for (int i = 3; i > 0; i--)
    {
    digitalWrite(pis[i-1], HIGH);
    delay(temps);
    }
  
  for (int i = 3; i >= 0; i--)
    {
    digitalWrite(pis[i], LOW);
    delay(temps);
    }
}

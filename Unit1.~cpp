//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "fstream.h"
#include "time.h"
#include "Unit1.h"
#include "cstddef.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

bool gameActive;
bool slot1Empty,slot2Empty,slot3Empty;
bool slot1Correct, slot2Correct,slot3Correct;
int engWordIndex, polWord2Index, polWord3Index;
int slot, correctAnsw;
int score = 0;
int skull = 0;

//------------------------- moje funkcje --------------------------------
void addSkull (int &skull)
{
        if (skull ==1) Form1->Image1->Visible = true;
        if (skull ==2) Form1->Image2->Visible = true;
        if (skull ==3) Form1->Image3->Visible = true;
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}

//---------------------------------------------------------------------------



void __fastcall TForm1::infoSlotClick(TObject *Sender)
{


        infoSlot->Enabled=false;
        if (skull < 3)
        {
                gameActive = true;
                slot1->Enabled=false;
                slot1->Visible=true; slot2->Visible=true; slot3->Visible=true;
                Label2->Visible=true;
                Label3->Visible=true;
                Label5->Visible=true; Label6->Visible=true; Label7->Visible=true;
                Label5->Enabled=true; Label6->Enabled=true; Label7->Enabled=true;
                Label9->Visible=true;
                bladImg->Visible = false; bladCap->Visible=false; Label8->Visible=false;
                Label3->Caption=score;

                bubble->Visible=false;
                Image4->Visible = true;
                Image5->Visible = false;
                slot1->Font->Color=clNavy; slot2->Font->Color=clNavy; slot3->Font->Color=clNavy;
                slot1Empty = true; slot1Correct = false;  slot1->Enabled=true; slot1->Color=clBtnFace;
                slot2Empty = true; slot2Correct = false;  slot2->Enabled=true; slot2->Color=clBtnFace;
                slot3Empty = true; slot3Correct = false;  slot3->Enabled=true; slot3->Color=clBtnFace;
                slot1->Cursor=crHandPoint; slot2->Cursor=crHandPoint;  slot3->Cursor=crHandPoint;
                Label1->Enabled=true;

                infoSlot->Caption ="Nastêpne s³ówko";

                slot1->Caption =" "; slot1->Alignment=taLeftJustify;
                slot2->Caption =" "; slot2->Alignment=taLeftJustify;
                slot3->Caption =" "; slot3->Alignment=taLeftJustify;

                //losowanie pytania
                srand(time(NULL));
                engWordIndex = random(430)*2;
                correctAnsw = engWordIndex +1; // poprawna odpowiedz znajduje sie w pliku o 1 linie nizej
                slot0->Caption=(RichEdit1->Lines->Strings[engWordIndex]);

                //losowanie szufladki na prawid³ow¹ odpowiedŸ
                slot = (random(3)+1);

                switch(slot)
                {
                        case 1 :
                        {
                                slot1Empty = false;
                                slot1Correct = true;
                                slot1->Caption=(RichEdit1->Lines->Strings[correctAnsw]);
                                break;
                        }
                        case 2:
                        {
                                slot2Empty = false;
                                slot2Correct = true;
                                slot2->Caption=(RichEdit1->Lines->Strings[correctAnsw]);
                                break;
                        }
                        case 3:
                        {
                                slot3Empty=false;
                                slot3Correct = true;
                                slot3->Caption=(RichEdit1->Lines->Strings[correctAnsw]);
                                break;
                        }
                }//switch

                //losowanie slow polskich dla b³êdnych odpowiedzi
                polWord2Index = (random(430)*2)+1;  // losowanie indexu nieparzystego
                polWord3Index = (random(430)*2)+1;  // losowanie indexu nieparzystego

                if (slot1Empty == false)
                {
                        slot2->Caption=(RichEdit1->Lines->Strings[polWord2Index]);
                        slot3->Caption=(RichEdit1->Lines->Strings[polWord3Index]);
                }
                if (slot2Empty == false)
                {
                        slot1->Caption=(RichEdit1->Lines->Strings[polWord2Index]);
                        slot3->Caption=(RichEdit1->Lines->Strings[polWord3Index]);
                }
                if (slot3Empty == false)
                {
                        slot1->Caption=(RichEdit1->Lines->Strings[polWord2Index]);
                        slot2->Caption=(RichEdit1->Lines->Strings[polWord3Index]);
                }

        }  // if (skull < 3)
        else
        {
                // gracz stracil 3 zycia
                slot1->Enabled=false; slot2->Enabled=false; slot3->Enabled=false;
                Label5->Enabled=false; Label6->Enabled=false; Label7->Enabled=false;
                Label1->Caption="Od nowa";
                infoSlot->Enabled=false; infoSlot->Caption="Koniec gry";
                Label8->Visible=true;
                bladCap->Visible=false;
                
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
    // Okno powitalne
    gameActive=false;
    score = 0;
    bubble->Visible=true;
    Label5->Visible=false; Label6->Visible=false; Label7->Visible=false;
    Image1->Visible = false; Image2->Visible = false; Image3->Visible = false;
    skull = 0;
    bladImg->Visible = false; bladCap->Visible=false;

    slot1->Visible=false; slot2->Visible=false; slot3->Visible=false;

    Label1->Enabled=false; Label2->Visible=false; Label3->Visible=false;
    Label9->Visible=false;
    Label8->Visible=false;

    
    slot1->Enabled=true; slot2->Enabled=true; slot3->Enabled=true;

    Label1->Caption="Stop";
    Label1->Enabled=false;
    infoSlot->Enabled=true;
    infoSlot->Caption="Rozpocznij Quiz";
    Image4->Visible = true;
    Image5->Visible = false;
    
    slot0 ->Caption ="Fiszki angielskie dla Programistów";
    Label3->Caption = score;

  
}
//---------------------------------------------------------------------------





void __fastcall TForm1::slot2Click(TObject *Sender)
{
     
     if(gameActive == true)
     {
     //slot1->Enabled=false;
     //slot3->Enabled=false;
     infoSlot->Enabled=true;
     if (slot2Correct == true )
        {
           score++;
           slot2->Font->Color=clGreen;
           Label3->Caption=score;
        }
        else {
           slot2->Font->Color=clRed;
           skull++;
           addSkull(skull);
           Image4->Visible = false;
           Image5->Visible = true;
           bladImg->Visible = true;
           bladCap->Visible=true;
           if (slot1Correct == true) slot1->Font->Color=clGreen;
           if (slot3Correct == true) slot3->Font->Color=clGreen;

        }
     }
      gameActive=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::slot3Click(TObject *Sender)
{

     if (gameActive == true)
     {
        //slot1->Enabled=false;
        //slot2->Enabled=false;
        infoSlot->Enabled=true;
        if (slot3Correct == true)
        {
           score++;
           slot3->Font->Color=clGreen;
           Label3->Caption=score;
        }
        else {

           slot3->Font->Color=clRed;
           skull++;
           addSkull(skull);
           Image4->Visible = false;
           bladImg->Visible = true;
           bladCap->Visible=true;
           
           Image5->Visible = true;
           if (slot1Correct == true) slot1->Font->Color=clGreen;
           if (slot2Correct == true) slot2->Font->Color=clGreen;
        }
     }
     gameActive=false;   
}
//---------------------------------------------------------------------------

void __fastcall TForm1::slot1Click(TObject *Sender)
{

        if (gameActive == true)
        {

                //slot2->Enabled=false;
                //slot3->Enabled=false;
                infoSlot->Enabled=true;
                if (slot1Correct == true)
                {
                        score++;
                        slot1->Font->Color=clGreen;
                        Label3->Caption=score;
                }
                else {
           
                        slot1->Font->Color=clRed;
                        skull++;
                        addSkull(skull);
                        bladImg->Visible = true;
                        bladCap->Visible=true;
                        Image4->Visible = false;
                        Image5->Visible = true;
                        if (slot2Correct == true) slot2->Font->Color=clGreen;
                        if (slot3Correct == true) slot3->Font->Color=clGreen;
                }
        }
        gameActive=false;
        
}
//---------------------------------------------------------------------------













void __fastcall TForm1::Label4Click(TObject *Sender)
{
        ShellExecute(NULL,"open","http://przyszlyprogramista.pl", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------




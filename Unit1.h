//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TLabel *slot2;
        TLabel *slot1;
        TLabel *slot3;
        TLabel *slot0;
        TLabel *infoSlot;
        TRichEdit *RichEdit1;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TLabel *Label7;
        TImage *Image4;
        TImage *Image5;
        TImage *bubble;
        TImage *bladImg;
        TLabel *bladCap;
        TLabel *Label9;
        TLabel *Label8;
        TLabel *Label10;
        void __fastcall infoSlotClick(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall slot2Click(TObject *Sender);
        void __fastcall slot3Click(TObject *Sender);
        void __fastcall slot1Click(TObject *Sender);
        void __fastcall Label4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

//---------------------------------------------------------------------------

#include<vcl.h>
#include<vfw.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PageControl1Change(TObject *Sender)
{
        StatusBar1 -> Panels -> Items[0] -> Text = "Active page: "
                + PageControl1 -> ActivePage -> Caption;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(OpenDialog1 -> Execute()){
                Image1 -> Picture -> LoadFromFile(OpenDialog1 -> FileName);

        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Close();        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        if(OpenDialog1 -> Execute()){
                MediaPlayer1 -> FileName = OpenDialog1 -> FileName;
                MediaPlayer1 -> Open();
                MediaPlayer1 -> DisplayRect = Panel3 -> ClientRect;
                MediaPlayer1 -> Play();
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
        if(OpenDialog1->Execute()){
                ListBox1->Items->Add(OpenDialog1->FileName);
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ListBox1Click(TObject *Sender)
{
         MediaPlayer2->FileName=ListBox1->Items->Strings[ListBox1->ItemIndex];
         MediaPlayer2->Open();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
        OpenDialog1->DefaultExt="AVI";
        OpenDialog1->FileName="*.avi";
        if(OpenDialog1->Execute())
        {
                Form1->Caption="Odtwarzanie-"+ExtractFileName(OpenDialog1->FileName);
                MCIWndCreate(Panel5->Handle,
                NULL,
                WS_VISIBLE|WS_CHILD|MCIWNDF_SHOWALL,
                OpenDialog1->FileName.c_str());
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
        OpenDialog1->DefaultExt="MP3";
        OpenDialog1->FileName="*.mp3";
        Form1->Caption="Odtwarzacz-"+ExtractFileName(OpenDialog1->FileName);
        if(OpenDialog1->Execute())
                PlaySound(OpenDialog1->FileName.c_str(),NULL,SND_ASYNC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
        OpenDialog1->DefaultExt="MP3";
        OpenDialog1->FileName="*.mp3";
        if(OpenDialog1->Execute())
        {
                Form1->Caption="Odtwarzacz-"+ExtractFileName(OpenDialog1->FileName);
                MediaPlayer1->FileName=OpenDialog1->FileName;
                MediaPlayer1->Display=Panel5;
                MediaPlayer1->Open();
                MediaPlayer1->Play();
        }
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPageControl *PageControl1;
        TTabSheet *TabSheet1;
        TTabSheet *TabSheet2;
        TTabSheet *TabSheet3;
        TTabSheet *TabSheet4;
        TStatusBar *StatusBar1;
        TPanel *Panel1;
        TImage *Image1;
        TOpenDialog *OpenDialog1;
        TButton *Button1;
        TButton *Button2;
        TMediaPlayer *MediaPlayer1;
        TPanel *Panel2;
        TPanel *Panel3;
        TButton *Button3;
        TPanel *Panel4;
        TButton *Button4;
        TMediaPlayer *MediaPlayer2;
        TListBox *ListBox1;
        TButton *Button5;
        TButton *Button6;
        TButton *Button7;
        TMediaPlayer *MediaPlayer3;
        TPanel *Panel5;
        void __fastcall PageControl1Change(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall ListBox1Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button7Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif

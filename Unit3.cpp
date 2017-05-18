//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;


//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::Button1Click(TObject *Sender)
{
if(Edit1->Text==""){
	ShowMessage("Ââåäèòå íîìåð");
}
if(Memo1->Text==""){
	ShowMessage("Ââåäèòå ñîîáùåíèå");
}
Edit2->Text="";
Memo2->Text="";
String a;
String b;
String c;
int d=0;
String e=Edit1->Text;
c="";
if(Edit1->Text[1]=='+'){
	Edit1->Text=Edit1->Text.Delete(1,1);
}
if ((Edit1->Text.Length()%2)>0){
 	Edit1->Text=Edit1->Text+"F";
 }
int i=1;
while(i<Edit1->Text.Length()){
	c=c+Edit1->Text[i+1]+Edit1->Text[i];
	i+=2;
}
Edit2->Text=c;

a=Edit2->Text;

d=Edit2->Text.Length();
b=IntToHex(d-1,2);

Edit2->Text="000100"+b+"91"+a;
Edit1->Text=e;


String Soobshenye=Memo1->Text;

TBytes biti;
biti = TEncoding::Unicode->GetBytes(Soobshenye);
Soobshenye="";
for(int i = 0; i < biti.Length; i+=2){
	Soobshenye = Soobshenye + IntToHex(biti[i+1], 2) + "" + IntToHex(biti[i], 2);
}
  Memo2->Lines->Add(Edit2->Text+"00"+"08"+"12"+Soobshenye);
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormCreate(TObject *Sender)
{
Memo1->Clear();
Memo2->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm3::Button2Click(TObject *Sender)
{
if(Edit1->Text==""){
	ShowMessage("Ââåäèòå íîìåð");
}
if(Memo1->Text==""){
	ShowMessage("Ââåäèòå ñîîáùåíèå");
}
String DecodeNumber;
DecodeNumber="";
String a=Edit1->Text;
a=Edit1->Text.Delete(1,10);
int i;
for(i=1;i<a.Length();i++){
	if((a[i]=='F')||(a[i]=='f'))
	{
	a=a.Delete(i,1);
	}

}
i=1;
while(i<a.Length()){
	DecodeNumber=DecodeNumber+a[i+1]+a[i];
	i+=2;
}
Edit2->Text=DecodeNumber;
}
//---------------------------------------------------------------------------

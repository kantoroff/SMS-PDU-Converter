object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'SMS Converter'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 15
    Width = 76
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1085#1086#1084#1077#1088
  end
  object Label2: TLabel
    Left = 32
    Top = 77
    Width = 102
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1089#1086#1086#1073#1097#1077#1085#1080#1077
  end
  object Edit1: TEdit
    Left = 32
    Top = 34
    Width = 185
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 416
    Top = 34
    Width = 185
    Height = 21
    TabOrder = 1
  end
  object Button1: TButton
    Left = 272
    Top = 32
    Width = 89
    Height = 25
    Caption = #1050#1086#1076#1080#1088#1086#1074#1072#1085#1080#1077
    TabOrder = 2
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 32
    Top = 104
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object Memo2: TMemo
    Left = 416
    Top = 104
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo2')
    TabOrder = 4
  end
  object Button2: TButton
    Left = 272
    Top = 94
    Width = 89
    Height = 25
    Caption = #1044#1077#1082#1086#1076#1080#1088#1086#1074#1072#1085#1080#1077
    TabOrder = 5
    OnClick = Button2Click
  end
end

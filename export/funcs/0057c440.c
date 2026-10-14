
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0057c440(int param_1)

{
  TextRenderContext *this;
  float fVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  IDPMsgHandler *this_00;
  IDPMsgHandler *extraout_ECX;
  IDPMsgHandler *this_01;
  IDPMsgHandler *extraout_ECX_00;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  IDPMsgHandler *pIStack_18;
  int iStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0057ab10();
  if (*(CInputBox **)(param_1 + 0x52c) != (CInputBox *)0x0) {
    local_10 = *(undefined4 *)(param_1 + 0x348);
    local_c = *(undefined4 *)(param_1 + 0x34c);
    local_8 = *(undefined4 *)(param_1 + 0x350);
    uVar3 = *(ulong *)(param_1 + 0x510);
    local_4 = *(undefined4 *)(param_1 + 0x354);
    if ((int)uVar3 < 1) {
      uVar3 = 0x50;
    }
    CInputBox::SetInputBufferSize(*(CInputBox **)(param_1 + 0x52c),uVar3);
    (**(code **)(**(int **)(param_1 + 0x52c) + 0xc))(&local_10);
  }
  if ((((*(byte *)(param_1 + 0x6c) & 2) != 0) && (iVar4 = FUN_00577d50(), iVar4 == param_1 + 0x498))
     && (*(char *)(param_1 + 0x4ac) != '\0')) {
    FUN_00422190(0);
    FUN_00421ed0(0xb71);
    FUN_00421ed0(0xb44);
    FUN_00421ed0(0xbe2);
    IDPMsgHandler::OnDisconnect(this_00);
    FUN_00422a70();
    FUN_004225e0();
    this = (TextRenderContext *)(param_1 + 900);
    TextRenderContext::reset_to_default(this);
    TextRenderContext::set_pos_v(this,0);
    TextRenderContext::set_pos_h(this,0);
    pfVar7 = &fStack_20;
    pfVar6 = &fStack_24;
    pfVar5 = &fStack_1c;
    iVar4 = RenderDisplayList::get_element_count((RenderDisplayList *)(param_1 + 0x4dc));
    bVar2 = RenderDisplayList::get_element_pos
                      ((RenderDisplayList *)(param_1 + 0x374),this,iVar4 + *(int *)(param_1 + 0x49c)
                       ,pfVar5,pfVar6,pfVar7);
    this_01 = extraout_ECX;
    if (bVar2) {
      iStack_14 = *(int *)(param_1 + 0x360);
      switch(*(undefined4 *)(param_1 + 0x408)) {
      case 0:
        pIStack_18 = *(IDPMsgHandler **)(param_1 + 0x364);
        break;
      case 1:
        pIStack_18 = (IDPMsgHandler *)0x0;
        break;
      case 2:
        pIStack_18 = (IDPMsgHandler *)-((*(int *)(param_1 + 0x35c) - *(int *)(param_1 + 0x380)) / 2)
        ;
        break;
      case 3:
        this_01 = (IDPMsgHandler *)(*(int *)(param_1 + 0x380) - *(int *)(param_1 + 0x35c));
        pIStack_18 = this_01;
      }
      fStack_1c = fStack_1c - (float)iStack_14;
      fStack_20 = fStack_20 * *(float *)(param_1 + 0x4bc) - (_DAT_005e456c + _DAT_005e456c);
      fStack_24 = (fStack_24 - (float)(int)pIStack_18) + _DAT_005e456c;
      if (((_DAT_005c7474 <= fStack_1c) && (fStack_1c < (float)*(int *)(param_1 + 0x358))) &&
         ((pIStack_18 = (IDPMsgHandler *)(float)*(int *)(param_1 + 0x35c),
          fStack_24 < (float)pIStack_18 && (-fStack_20 < fStack_24)))) {
        fVar1 = fStack_24 + fStack_20;
        if (_DAT_005c7474 <= fStack_24) {
          if ((float)pIStack_18 <= fVar1) {
            fStack_20 = (float)pIStack_18 - fStack_24;
          }
        }
        else {
          fStack_24 = 0.0;
          fStack_20 = fVar1;
        }
        fStack_1c = (float)*(int *)(param_1 + 0x348) + fStack_1c;
        fStack_24 = (float)*(int *)(param_1 + 0x34c) + fStack_24;
        FUN_00421ba0(param_1 + 0x4b8);
        FUN_00421ed0(0xde1);
        FUN_00421670(2);
        FUN_00421cc0(fStack_1c,fStack_24,0);
        FUN_00421cc0(fStack_1c,fStack_24 + fStack_20,0);
        FUN_00421690();
        this_01 = extraout_ECX_00;
      }
    }
    uVar8 = 0x1701;
    IDPMsgHandler::OnDisconnect(this_01);
    FUN_00422ab0(uVar8);
    FUN_00421dd0(0xb71);
    FUN_00422190(1);
  }
  return;
}


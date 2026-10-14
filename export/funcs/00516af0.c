
void __fastcall FUN_00516af0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  
  uVar9 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 4);
  iVar1 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,uVar9,0,0xffffffff);
  do {
    if (iVar1 == -1) {
      return;
    }
    puVar2 = (undefined4 *)
             (**(code **)(**(int **)Engine_exref + 0x68))
                       (*(int **)Engine_exref,&stack0xffffffe8,iVar1);
    pcVar3 = (char *)*puVar2;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    iVar4 = 10;
    bVar8 = true;
    pcVar6 = pcVar3;
    pcVar7 = "TLR_Right";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar8 = *pcVar6 == *pcVar7;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar8);
    if (bVar8) {
      iVar4 = param_1 + 0x1c;
      iVar5 = param_1 + 0x10;
LAB_00516b74:
      *(int *)(iVar4 + 4) = iVar1;
      *(int *)(iVar4 + 8) = param_1;
      if (*(int *)(iVar5 + 4) != -1) {
        return;
      }
    }
    else {
      iVar4 = 9;
      bVar8 = true;
      pcVar6 = "TLR_Left";
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar8 = *pcVar3 == *pcVar6;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar4 = param_1 + 0x10;
        iVar5 = param_1 + 0x1c;
        goto LAB_00516b74;
      }
    }
    iVar1 = (**(code **)(**(int **)Engine_exref + 0xd8))(*(int **)Engine_exref,uVar9,0,iVar1);
  } while( true );
}



void __fastcall FUN_0045fb40(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  RenderDisplayList *this;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  undefined4 local_14;
  int *local_10;
  undefined1 local_c [4];
  undefined4 local_8;
  undefined1 local_4 [4];
  
  piVar8 = (int *)**(int **)(param_1 + 4);
  if (piVar8 != *(int **)(param_1 + 4)) {
    do {
      piVar7 = piVar8 + 3;
      if ((*(char *)((int)piVar8 + 0xe) == '\0') && (*piVar7 != DAT_0066da48)) {
        puVar5 = (undefined4 *)FUN_0046e640(local_c,piVar7);
        puVar6 = (undefined4 *)FUN_0046d920(&local_8,piVar7);
        uVar2 = *puVar6;
        uVar3 = *puVar5;
        local_14 = 0;
        FUN_0046ec70(uVar2,uVar3,&local_14,local_8);
        FUN_0046cef0(local_4,uVar2,uVar3);
        this = (RenderDisplayList *)piVar8[4];
        if (this != (RenderDisplayList *)0x0) {
          RenderDisplayList::~RenderDisplayList(this);
          FUN_005b7e1d(this);
        }
        FUN_0046c8c0(&local_10,piVar8);
        piVar8 = local_10;
      }
      else {
        piVar7 = (int *)piVar8[2];
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0x15);
          piVar4 = (int *)*piVar7;
          while (piVar8 = piVar7, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar7 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          piVar7 = (int *)piVar8[1];
          if (piVar8 == (int *)piVar7[2]) {
            do {
              piVar8 = piVar7;
              piVar7 = (int *)piVar8[1];
            } while (piVar8 == (int *)piVar7[2]);
          }
          if ((int *)piVar8[2] != piVar7) {
            piVar8 = piVar7;
          }
        }
      }
    } while (piVar8 != *(int **)(param_1 + 4));
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


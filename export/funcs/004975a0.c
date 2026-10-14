
void __fastcall FUN_004975a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte bStack_31;
  int *local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int iStack_20;
  ID_String aIStack_1c [4];
  undefined4 uStack_18;
  byte bStack_8;
  
  if (*(int *)(param_1 + 2000) == 0) {
    FUN_004a2f80(&local_24,**(undefined4 **)(param_1 + 0x810),*(undefined4 **)(param_1 + 0x810));
    local_30 = (int *)**(int **)(param_1 + 0x400);
    if (local_30 != *(int **)(param_1 + 0x400)) {
      do {
        local_28 = local_30[2];
        if ((*(char *)(local_28 + 0x48) != '\0') && ((*(byte *)(local_28 + 4) & 4) != 0)) {
          piVar1 = *(int **)(local_28 + 100);
          local_24 = (**(code **)(*piVar1 + 0x34))();
          iStack_2c = 0;
          if (0 < local_24) {
            do {
              iVar3 = iStack_2c;
              ID_String::clear(aIStack_1c);
              (**(code **)(*piVar1 + 0x38))(iVar3,&iStack_20);
              bStack_31 = 0;
              FUN_004c4da0(uStack_18,&bStack_31,0,0);
              bStack_31 = bStack_31 | bStack_8;
              if (((bStack_31 & 1) != 0) &&
                 (piVar4 = (int *)**(int **)(param_1 + 0x400), piVar4 != *(int **)(param_1 + 0x400))
                 ) {
                do {
                  iVar3 = piVar4[2];
                  if ((*(char *)(iVar3 + 0x48) != '\0') &&
                     (((*(byte *)(iVar3 + 4) & 4) != 0 &&
                      (iVar2 = (**(code **)**(undefined4 **)(iVar3 + 100))(), iVar2 == iStack_20))))
                  {
                    FUN_004976e0(local_28,iVar3);
                  }
                  piVar4 = (int *)*piVar4;
                  iVar3 = iStack_2c;
                } while (piVar4 != (int *)*(int *)(param_1 + 0x400));
              }
              iStack_2c = iVar3 + 1;
            } while (iStack_2c < local_24);
          }
        }
        local_30 = (int *)*local_30;
      } while (local_30 != (int *)*(int *)(param_1 + 0x400));
    }
  }
  return;
}


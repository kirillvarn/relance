
void __fastcall FUN_0043e050(int param_1)

{
  code cVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  bool bVar9;
  undefined4 uVar10;
  
  iVar5 = DAT_00668740;
  piVar6 = *(int **)(param_1 + 0x380);
  piVar7 = (int *)*piVar6;
  if (*(int *)(param_1 + 0x374) == 0) {
    if (piVar7 != piVar6) {
      do {
        iVar2 = piVar7[0xe];
        if (*(char *)((int)piVar7 + 9) == '\0') {
          if (iVar2 == 6) {
            *(undefined1 *)(piVar7 + 2) = 1;
            (**(code **)(*(int *)piVar7[8] + 0xa8))(2,1,0);
          }
          else {
            if (iVar2 != 0xc) {
              piVar6 = (int *)piVar7[8];
              uVar10 = 2;
              goto LAB_0043e0f9;
            }
            cVar3 = FUN_004b4510();
            (**(code **)(*(int *)piVar7[8] + 0xa8))(2,cVar3 == '\0',0);
            *(bool *)(piVar7 + 2) = cVar3 == '\0';
          }
        }
        else {
          piVar6 = (int *)piVar7[8];
          if (iVar2 == iVar5) {
            (**(code **)(*piVar6 + 0xa8))(0xc,1);
          }
          else {
            uVar10 = 0xc;
LAB_0043e0f9:
            (**(code **)(*piVar6 + 0xa8))(uVar10,0,0);
          }
        }
        piVar7 = (int *)*piVar7;
      } while (piVar7 != (int *)*(int *)(param_1 + 0x380));
    }
  }
  else if (piVar7 != piVar6) {
    do {
      if (*(char *)((int)piVar7 + 9) == '\0') {
        if (piVar7[0xe] == 6) {
          *(undefined1 *)(piVar7 + 2) = 1;
          (**(code **)(*(int *)piVar7[8] + 0xa8))(2,1,0);
        }
        else {
          if (piVar7[0xe] != 0xc) {
            uVar10 = 2;
            goto LAB_0043e1de;
          }
          cVar3 = FUN_004b4510();
          (**(code **)(*(int *)piVar7[8] + 0xa8))(2,cVar3 == '\0',0);
          *(bool *)(piVar7 + 2) = cVar3 == '\0';
        }
      }
      else {
        pcVar8 = *(code **)(piVar7[9] + 4);
        if (pcVar8 != (code *)0x0) {
          pcVar4 = *(code **)(param_1 + 0x370);
          if (*(code **)(param_1 + 0x370) == (code *)0x0) {
            pcVar4 = _C_exref;
          }
          do {
            cVar1 = *pcVar4;
            bVar9 = (byte)cVar1 < (byte)*pcVar8;
            if (cVar1 != *pcVar8) {
LAB_0043e168:
              iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
              goto LAB_0043e16d;
            }
            if (cVar1 == (code)0x0) break;
            cVar1 = pcVar4[1];
            bVar9 = (byte)cVar1 < (byte)pcVar8[1];
            if (cVar1 != pcVar8[1]) goto LAB_0043e168;
            pcVar4 = pcVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (cVar1 != (code)0x0);
          iVar5 = 0;
LAB_0043e16d:
          if (iVar5 == 0) {
            (**(code **)(*(int *)piVar7[8] + 0xa8))(0xc,1,0);
            goto LAB_0043e1e9;
          }
        }
        uVar10 = 0xc;
LAB_0043e1de:
        (**(code **)(*(int *)piVar7[8] + 0xa8))(uVar10,0,0);
      }
LAB_0043e1e9:
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(param_1 + 0x380));
  }
  FUN_0043e4c0();
  FUN_0043e210(1);
  return;
}


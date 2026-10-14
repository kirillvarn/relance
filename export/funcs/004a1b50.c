
int * FUN_004a1b50(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,
                  undefined4 param_9)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  undefined4 in_stack_00002028;
  int *in_stack_0000202c;
  undefined4 *in_stack_00002030;
  char in_stack_00002034;
  undefined4 *puVar9;
  
  FUN_005b7e90();
  piVar3 = (int *)(**(code **)(*in_stack_0000202c + 0x1c))();
  if (piVar3 != (int *)0x0) {
    param_4 = *in_stack_00002030;
    param_5 = in_stack_00002030[1];
    param_6 = in_stack_00002030[2];
    param_9 = 0;
    param_8 = 0x800;
    param_7 = 0x3dcccccd;
    iVar4 = (**(code **)(*piVar3 + 0x1c))(&param_4,&param_8);
    if (iVar4 != 0) {
      uVar6 = 0;
      fVar8 = 1e+20;
      if (param_7 != 0) {
        puVar9 = &param_8;
        if (param_7 == 0) {
          piVar3 = (int *)0x0;
          goto LAB_004a1bea;
        }
        do {
          piVar3 = (int *)*puVar9;
LAB_004a1bea:
          if ((((char)in_stack_0000202c == '\0') ||
              (iVar4 = (**(code **)(*piVar3 + 0x84))(), iVar4 != 0)) &&
             (((char)in_stack_00002030 == '\0' ||
              (iVar4 = (**(code **)(*piVar3 + 0x88))(), iVar4 != 0)))) {
            if (in_stack_00002034 == '\0') {
              uVar5 = (**(code **)(*piVar3 + 4))(&stack0xfffffffb,1,0);
              FUN_004c4da0(uVar5);
              bVar1 = (**(code **)(*piVar3 + 0x80))();
              if (((bVar1 & 1) == 0) || (((char)in_stack_00002030 != '\0' && ((bVar1 & 8) == 0))))
              goto LAB_004a1ca5;
            }
            cVar2 = (**(code **)(*piVar3 + 0x38))(in_stack_00002028,0);
            if ((cVar2 != '\0') &&
               (fVar7 = (float10)(**(code **)(*piVar3 + 0x30))(), fVar7 < (float10)fVar8)) {
              fVar8 = (float)fVar7;
              param_1 = piVar3;
            }
          }
LAB_004a1ca5:
          uVar6 = uVar6 + 1;
          puVar9 = puVar9 + 1;
          if (param_7 <= uVar6) {
            return param_1;
          }
        } while( true );
      }
    }
  }
  return (int *)0x0;
}


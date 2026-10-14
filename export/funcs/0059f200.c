
undefined4 FUN_0059f200(int param_1)

{
  int iVar1;
  char cVar2;
  float *pfVar3;
  long lVar4;
  int *piStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 *puStack_3c;
  int *piStack_38;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  float fStack_18;
  float *pfStack_14;
  
  iVar1 = param_1;
  piStack_38 = (int *)0x59f212;
  cVar2 = FUN_00420d60();
  if (cVar2 != '\0') {
    piStack_48 = *(int **)Engine_exref;
    piStack_38 = &local_28;
    puStack_3c = &param_1;
    fStack_44 = *(float *)(iVar1 + 4);
    fStack_40 = 0.0;
    (**(code **)(*piStack_48 + 0x88))();
    pfVar3 = (float *)(**(code **)(**(int **)Engine_exref + 0x90))
                                (*(int **)Engine_exref,*(undefined4 *)(iVar1 + 4));
    fStack_44 = fStack_44 + *pfVar3;
    fStack_40 = fStack_40 + pfVar3[1];
    puStack_3c = (undefined4 *)((float)puStack_3c + pfVar3[2]);
    piStack_38 = (int *)fStack_44;
    lVar4 = get_projected_bounding_box
                      ((ICamera *)&DAT_0067dbf8,(Vector *)&fStack_44,fStack_18,
                       (ViewRect *)&iStack_2c,(float *)&piStack_48);
    if (lVar4 != 0) {
      *pfStack_14 = (float)iStack_2c;
      pfStack_14[1] = (float)local_28;
      pfStack_14[2] = (float)iStack_24;
      pfStack_14[3] = (float)iStack_20;
      return 1;
    }
  }
  return 0;
}


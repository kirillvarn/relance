
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054beb0(undefined4 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  char *unaff_EBX;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  int *unaff_retaddr;
  int iStack_7c;
  float fStack_78;
  float afStack_74 [2];
  undefined4 local_6c;
  undefined4 local_68;
  float local_64 [7];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [12];
  undefined1 auStack_34 [40];
  undefined4 local_c;
  undefined4 local_8;
  float local_4;
  
  iVar5 = FUN_005792b0(0x19);
  if ((iVar5 == 0) &&
     (((DAT_006797b8 != (int *)0x0 || (DAT_006797bc != (int *)0x0)) || (DAT_006797c0 != (int *)0x0))
     )) {
    FUN_0054bdc0(&DAT_006797c0);
    FUN_0054bdc0(&DAT_006797bc);
    CacheString::clear((CacheString *)&DAT_00679790);
    DAT_006797b0 = 0;
    _DAT_006797b4 = 0;
    FUN_0054bdc0(&DAT_006797b8);
  }
  local_64[0] = (float)_DAT_00614084;
  local_6c = 0;
  local_68 = 0;
  FUN_004215b0();
  local_c = local_6c;
  local_8 = local_68;
  local_4 = local_64[0];
  (**(code **)(*param_2 + 0x10))(param_2);
  FUN_0054c320(local_64,auStack_34);
  if (_DAT_00614080 <= _DAT_005c8930) {
    if (DAT_006797c0 != (int *)0x0) {
      (**(code **)(*DAT_006797c0 + 4))();
      FUN_004f7a90();
      DAT_006797c0 = (int *)0x0;
    }
    if (DAT_006797bc != (int *)0x0) {
      (**(code **)(*DAT_006797bc + 4))();
      FUN_004f7a90();
      DAT_006797bc = (int *)0x0;
    }
    CacheString::clear((CacheString *)&DAT_00679790);
    DAT_006797b0 = 0;
    _DAT_006797b4 = 0;
  }
  else {
    CacheString::clear((CacheString *)&stack0xffffff80);
    CacheString::clear((CacheString *)&stack0xffffff80);
    iStack_7c = 0;
    fStack_78 = 1.0;
    if ((unaff_retaddr != (int *)0x0) &&
       (piVar6 = (int *)(**(code **)(*unaff_retaddr + 0x30))(auStack_40,0x200000),
       piVar6 != (int *)0x0)) {
      cVar4 = (**(code **)(*piVar6 + 0x78))(&stack0xffffff80,&iStack_7c);
      if (cVar4 == '\0') {
        (**(code **)FDUMP_exref)
                  (0x100002,"%s(%d) : *** WARNING: %s",
                   "E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceDust.cpp",0xa8,
                   "zone flagged as PROP_DUST_ZONE but has no dust");
      }
      fVar9 = (float10)(**(code **)*piVar6)(auStack_48);
      fStack_78 = (float)fVar9;
    }
    if (unaff_EBX != DAT_00679790) {
      DAT_00679790 = unaff_EBX;
      if (DAT_006797c0 != (int *)0x0) {
        (**(code **)(*DAT_006797c0 + 4))();
        FUN_004f7a90();
      }
      DAT_006797c0 = DAT_006797bc;
      _DAT_006797b4 = DAT_006797b0;
      DAT_006797bc = (int *)0x0;
      if (*unaff_EBX != '\0') {
        iVar5 = FUN_004f79a0(0x84);
        if (iVar5 == 0) {
          DAT_006797bc = (int *)0x0;
        }
        else {
          DAT_006797bc = (int *)FUN_004f8060(0);
        }
        afStack_74[0] = (float)CreateID(unaff_EBX);
        iVar5 = FUN_0040f080(afStack_74);
        if (iVar5 == 0) {
          (**(code **)FDUMP_exref)
                    (0x100001,
                     "%s(%d) : *** ERROR: no archetype found for effect named \"%s\" in space dust",
                     "E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceDust.cpp",0x49,unaff_EBX);
        }
        else {
          (**(code **)*DAT_006797bc)(iVar5);
        }
      }
    }
    DAT_006797b0 = iStack_7c;
    if (DAT_006797c0 != (int *)0x0) {
      afStack_74[0] = (_DAT_005c75dc - fStack_78) * (float)_DAT_006797b4 * _DAT_005d3e94;
      if (afStack_74[0] < (float)_DAT_005c75f0 == (afStack_74[0] == (float)_DAT_005c75f0)) {
        pfVar7 = local_64;
        pfVar8 = (float *)(DAT_006797c0 + 4);
        for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar8 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar8 = pfVar8 + 1;
        }
        (**(code **)(*DAT_006797c0 + 0xc))(afStack_74[0]);
        *(byte *)(DAT_006797c0 + 2) = *(byte *)(DAT_006797c0 + 2) | 1;
        FUN_004f7af0();
      }
      else {
        (**(code **)(*DAT_006797c0 + 4))();
        FUN_004f7a90();
        DAT_006797c0 = (int *)0x0;
      }
    }
    if (DAT_006797bc != (int *)0x0) {
      afStack_74[0] = (float)DAT_006797b0 * _DAT_005d3e94;
      pfVar7 = local_64;
      pfVar8 = (float *)(DAT_006797bc + 4);
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
      afStack_74[0] = afStack_74[0] * fStack_78;
      (**(code **)(*DAT_006797bc + 0xc))(afStack_74[0]);
      *(byte *)(DAT_006797bc + 2) = *(byte *)(DAT_006797bc + 2) | 1;
      FUN_004f7af0();
    }
  }
  if (DAT_006797b8 != (int *)0x0) {
    fVar1 = (float)_DAT_005c89b8 - _DAT_00614080;
    fVar3 = (float)_DAT_006797ac;
    fVar2 = (float)_DAT_006797a8 * _DAT_00614080;
    pfVar7 = local_64;
    pfVar8 = (float *)(DAT_006797b8 + 4);
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    afStack_74[0] = (fVar2 + fVar1 * fVar3) * (float)_DAT_005e08f8;
    (**(code **)(*DAT_006797b8 + 0xc))(afStack_74[0]);
    *(byte *)(DAT_006797b8 + 2) = *(byte *)(DAT_006797b8 + 2) | 1;
    FUN_004f7af0();
    return;
  }
  if (*DAT_00679794 != '\0') {
    iVar5 = FUN_004f79a0(0x84);
    if (iVar5 == 0) {
      DAT_006797b8 = (int *)0x0;
    }
    else {
      DAT_006797b8 = (int *)FUN_004f8060(0);
    }
    afStack_74[0] = (float)CreateID(DAT_00679794);
    iVar5 = FUN_0040f080(afStack_74);
    if (iVar5 != 0) {
      (**(code **)*DAT_006797b8)(iVar5);
      return;
    }
    (**(code **)FDUMP_exref)
              (0x100001,
               "%s(%d) : *** ERROR: no archetype found for effect named \"%s\" in space dust",
               "E:\\FL\\Scratch\\Source\\Client\\Space\\SpaceDust.cpp",0x49,DAT_00679794);
  }
  return;
}


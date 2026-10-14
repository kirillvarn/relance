
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00421cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  if ((DAT_006168b4 < DAT_006168b0) && (DAT_006168a8 < DAT_006168a4)) {
    (&DAT_0065e8b8)[DAT_006168b4] = (short)DAT_006168a8;
    DAT_006168b4 = DAT_006168b4 + 1;
    iVar1 = DAT_006168a8 * 0x18;
    DAT_006168a8 = DAT_006168a8 + 1;
    *(undefined4 *)(&DAT_006168b8 + iVar1) = param_1;
    *(undefined4 *)(&DAT_006168bc + iVar1) = param_2;
    *(undefined4 *)(&DAT_006168c0 + iVar1) = param_3;
    *(undefined4 *)(&DAT_006168c4 + iVar1) = DAT_00616898;
    *(undefined4 *)(&DAT_006168c8 + iVar1) = DAT_0061689c;
    *(undefined4 *)(&DAT_006168cc + iVar1) = DAT_006168a0;
    return;
  }
  if ((DAT_00616880 & 1) == 0) {
    DAT_00616880 = DAT_00616880 | 1;
    _DAT_00616878 = 0.0;
    _DAT_0061687c = 1.0;
    FUN_005b7e6c(&DAT_00421dc0);
  }
  fVar2 = (float10)FUN_0042d660();
  if ((float10)_DAT_0061687c < fVar2 - (float10)_DAT_00616878) {
    _DAT_00616878 = (float)fVar2;
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: GL: %s\n",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\OpenGL.cpp",0x59,"glVertex overflow");
    return;
  }
  return;
}


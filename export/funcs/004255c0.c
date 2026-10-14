
bool __thiscall FUN_004255c0(int *param_1,char *param_2)

{
  int iVar1;
  char *local_8;
  ulong uStack_4;
  
  if (*param_1 != 0) {
    (**(code **)(**(int **)TextureLib_exref + 0x38))(*(int **)TextureLib_exref,*param_1);
    *param_1 = 0;
  }
  local_8 = param_2;
  uStack_4 = DACOM_CRC::GetCRC32(param_2);
  iVar1 = (**(code **)(**(int **)TextureLib_exref + 0x30))
                    (*(int **)TextureLib_exref,&local_8,param_1);
  if (iVar1 != 0) {
    (**(code **)FDUMP_exref)
              (0x100001,"%s(%d) : *** ERROR: texture (%s) is not defined",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\ShapeDB.cpp",0x24,param_2);
  }
  return *param_1 != 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00401ed0(undefined4 param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int in_stack_00001ff4;
  undefined4 in_stack_00002000;
  undefined4 *in_stack_00002008;
  undefined4 in_stack_00002018;
  undefined4 uVar9;
  int iVar10;
  float fVar11;
  
  FUN_005b7e90();
  param_2 = 0;
  (**(code **)(**(int **)Renderer_exref + 0x2c))(*(int **)Renderer_exref,in_stack_00002018);
  if (unaff_EBX != 0) {
    pcVar4 = (char *)(**(code **)(**(int **)Engine2_exref + 0xe0))
                               (*(int **)Engine2_exref,in_stack_00002008,in_stack_00002018);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "Root";
    }
    if ((8 < (int)&param_2) &&
       (FUN_00402180(&stack0xfffffff8,"number of lods(%d) in mesh exceeded max lods(%d) for %s",
                     &param_2,8,pcVar4), DAT_00616471 == '\0')) {
      DAT_00616471 = '\x01';
      (**(code **)FDUMP_exref)
                (0x100001,"%s(%d) : *** ERROR: %s",
                 "E:\\FL\\Scratch\\Source\\Client\\cmn\\ArchLod.cpp",0x6a,&stack0xfffffff8);
    }
    fVar5 = (float)DACOM_CRC::GetCRC32(pcVar4);
    pfVar3 = (float *)*in_stack_00002008;
    pfVar8 = pfVar3;
    if (pfVar3 != (float *)0x0) {
      while ((pfVar8[9] != 0.0 && (fVar5 != pfVar8[9]))) {
        pfVar1 = pfVar8 + 0xc;
        pfVar8 = (float *)*pfVar1;
        if ((float *)*pfVar1 == (float *)0x0) {
          return 1;
        }
      }
      *(undefined1 *)(pfVar3 + 10) = 1;
      fVar5 = *pfVar8;
      *(undefined1 *)(pfVar8 + 10) = 1;
      fVar2 = (float)in_stack_00002008[4];
      fVar11 = (float)_DAT_005c7410;
      puVar6 = (undefined4 *)in_stack_00002008[3];
      if ((int)&param_2 < (int)in_stack_00002008[3]) {
        puVar6 = &param_2;
      }
      if ((_DAT_005c7478 <= pfVar8[(int)&param_2]) ||
         (DAT_006101d4 * pfVar8[(int)&param_2] <= _DAT_005c7478)) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0x1000000;
      }
      iVar7 = 0;
      pfVar3 = pfVar8;
      iVar10 = 0;
      if (0 < (int)puVar6) {
        do {
          in_stack_00002018 = in_stack_00002000;
          if (pfVar3[1] < _DAT_005c7474) {
            iVar10 = iVar7;
            (**(code **)FDUMP_exref)
                      (0x100002,"%s(%d) : WARNING:General:%s",
                       "E:\\FL\\Scratch\\Source\\Client\\cmn\\ArchLod.cpp",0xa0,
                       "top lod specified more than the number of lods in the file???");
            break;
          }
          (**(code **)(**(int **)Renderer_exref + 0x3c))
                    (*(int **)Renderer_exref,in_stack_00002000,iVar7,0,0);
          iVar7 = iVar7 + 1;
          pfVar3 = pfVar3 + 1;
          iVar10 = iVar7;
        } while (iVar7 < (int)puVar6);
      }
      if (iVar7 < (int)&param_2) {
        if ((float)in_stack_00002008[1] < pfVar8[iVar7]) {
          in_stack_00002008[1] = pfVar8[iVar7];
        }
        pfVar8 = pfVar8 + iVar7 + 1;
        fVar5 = fVar5 * fVar2 * fVar11;
        do {
          if (*pfVar8 < _DAT_005c7474) {
            return 1;
          }
          fVar2 = *pfVar8;
          if (((char)((uint)uVar9 >> 0x18) != '\0') &&
             (_DAT_005c7478 < fVar2 * (float)in_stack_00002008[4])) {
            fVar2 = (float)iVar10 + _DAT_005c7478;
          }
          fVar11 = (float)_DAT_005c7410 * fVar2;
          if ((float)in_stack_00002008[1] < fVar2) {
            in_stack_00002008[1] = fVar2;
          }
          (**(code **)(**(int **)Renderer_exref + 0x3c))
                    (*(int **)Renderer_exref,in_stack_00002018,iVar7,fVar5,fVar11);
          (**(code **)(**(int **)Renderer_exref + 0x4c))
                    (*(int **)Renderer_exref,in_stack_00002018,0xffffffff,
                     *(undefined4 *)(in_stack_00001ff4 + 8));
          iVar7 = iVar7 + 1;
          pfVar8 = pfVar8 + 1;
          iVar10 = iVar7;
          fVar5 = fVar11;
        } while (iVar7 < (int)&param_2);
      }
    }
  }
  return 1;
}


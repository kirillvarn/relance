
void __thiscall FUN_0040e6e0(int param_1,int param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  bool bVar12;
  
  if (*(int *)(param_2 + 8) != *(int *)(param_1 + 8)) {
    pcVar5 = ID_String::get_string((ID_String *)(param_1 + 4));
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s: \'vis_effect\' changed to %s",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x89,pcVar5);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  piVar4 = *(int **)(param_2 + 0x18);
  if (piVar4 != *(int **)(param_1 + 0x18)) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    pcVar5 = ID_String::get_string((ID_String *)(param_1 + 4));
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s: \'snd_effect\' changed to %s",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x93,pcVar5);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  }
  pbVar1 = (byte *)(param_1 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    iVar6 = *(int *)(param_2 + 0x1c);
  }
  else {
    pbVar9 = (byte *)(param_2 + 0x20);
    pbVar10 = pbVar1;
    do {
      bVar3 = *pbVar9;
      bVar12 = bVar3 < *pbVar10;
      if (bVar3 != *pbVar10) {
LAB_0040e7b4:
        iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        goto LAB_0040e7b9;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar9[1];
      bVar12 = bVar3 < pbVar10[1];
      if (bVar3 != pbVar10[1]) goto LAB_0040e7b4;
      pbVar9 = pbVar9 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar3 != 0);
    iVar6 = 0;
  }
LAB_0040e7b9:
  if (iVar6 != 0) {
    pcVar5 = (char *)(param_2 + 0x20);
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %s: \'lgt_effect.name\' changed to %s.",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x97,pbVar1,pcVar5);
    if (pcVar5 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    else {
      uVar7 = 0xffffffff;
      pcVar11 = pcVar5;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7 - 1;
      if (0x1f < uVar7) {
        uVar7 = 0x1f;
      }
      pcVar11 = (char *)(param_1 + 0x20);
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar11 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar11 = pcVar11 + 1;
      }
      *(undefined1 *)(uVar7 + 0x20 + param_1) = 0;
      *(uint *)(param_1 + 0x1c) = uVar7;
    }
  }
  if (*(float *)(param_2 + 0x40) != *(float *)(param_1 + 0x40)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %.2f: \'lgt_effect.range_scale\' changed to %.2f.",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x98,
               (double)*(float *)(param_1 + 0x40),(double)*(float *)(param_2 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  }
  if (*(float *)(param_2 + 0x44) != *(float *)(param_1 + 0x44)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %.2f: \'lgt_effect.time_scale\' changed to %.2f.",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x99,
               (double)*(float *)(param_1 + 0x44),(double)*(float *)(param_2 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  }
  if (*(int *)(param_2 + 0x4c) != *(int *)(param_1 + 0x4c)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %x: \'lgt_color_value\' changed to %x.",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x9b,*(int *)(param_1 + 0x4c),
               *(int *)(param_2 + 0x4c));
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  }
  if (*(float *)(param_2 + 0x48) != *(float *)(param_1 + 0x48)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %2.f: \'lgt_radius\' changed to %2.f.",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x9c,
               (double)*(float *)(param_1 + 0x48),(double)*(float *)(param_2 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  }
  if (*(int *)(param_2 + 0x50) != *(int *)(param_1 + 0x50)) {
    (**(code **)FDUMP_exref)
              (0x100002,"%s(%d) : *** WARNING: %x: \'flags\' changed to %x.",
               "E:\\FL\\Scratch\\Source\\Client\\cmn\\EffectArch.cpp",0x9e,*(int *)(param_1 + 0x50),
               *(int *)(param_2 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  }
  return;
}


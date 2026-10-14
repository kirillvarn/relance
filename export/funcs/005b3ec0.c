
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b3ec0(char *param_1)

{
  float fVar1;
  FILE *_File;
  int *piVar2;
  int *piVar3;
  undefined1 local_221;
  char local_218 [264];
  char local_110 [268];
  
  GetUserDataPath(local_218);
  _makepath(local_110,(char *)0x0,local_218,param_1,(char *)0x0);
  _File = fopen(local_110,"w");
  if ((DAT_0067ed0c & 1) == 0) {
    DAT_0067ed0c = DAT_0067ed0c | 1;
    DAT_0067ed00 = local_221;
    DAT_0067ed04 = (int *)FUN_0042a7e0(0,0);
    DAT_0067ed08 = 0;
    FUN_005b7e6c();
  }
  if (_File != (FILE *)0x0) {
    fprintf(_File,"[PerfVersion]\nversion=%g\n",(double)_DAT_005e6dfc);
    fprintf(_File,"SkipMachineWarnings=%s\n\n");
    fprintf(_File,"[PerfCount]\ncount=%g\n\n",(double)DAT_0067ed08);
    fprintf(_File,"[PerfOptions]\n");
    piVar3 = (int *)*DAT_0067ed04;
    piVar2 = DAT_0067ed04;
    if (piVar3 != DAT_0067ed04) {
      do {
        fVar1 = *(float *)(piVar3[2] + 0x14);
        if (_DAT_005c7474 <= fVar1) {
          fprintf(_File,"%s = %.2f\n",*(undefined4 *)(piVar3[2] + 4),(double)fVar1);
          piVar2 = DAT_0067ed04;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar2);
    }
    fprintf(_File,"\n[Display]\n");
    fprintf(_File,"size= %d, %d\n",DAT_00679bc8,DAT_00679bcc);
    fprintf(_File,"color_bpp= %d\n",DAT_00679bd0);
    fprintf(_File,"depth_bpp= %d\n",DAT_00679bd4);
    fclose(_File);
  }
  return;
}


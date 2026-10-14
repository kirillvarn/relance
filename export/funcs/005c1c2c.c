
void Unwind_005c1c2c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xd0) & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005c1c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<unsigned_short,std::char_traits<unsigned_short>_>::
    ~basic_ios<unsigned_short,std::char_traits<unsigned_short>_>
              ((basic_ios<unsigned_short,std::char_traits<unsigned_short>_> *)(unaff_EBP + -0x40));
    return;
  }
  return;
}


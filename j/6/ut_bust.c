/* j/6/bust.c
**
** This file is in the public domain.
*/
#include "all.h"


/* logic
*/
  u3_noun
  _cqfu_bust(
                        u3_noun van,
                        u3_noun sut,
                        u3_noun dib)
  {
    u3_noun yam = u3_cqfu_burn(van, sut);
    u3_noun yib = u3nc
      (
       u3nc(u3k(u3h(u3h(yam))),
                    u3k(dib)),
       u3k(u3t(yam)));
    u3_noun woo = u3nc(c3__cnzy, u3_blip);
    u3_noun wox = u3_cqfu_mint(van, sut, c3__noun, woo);
    u3_noun ret = u3_cn_nock_on(yib, u3k(u3t(wox)));

    if ( u3_none == ret ) {
      return u3_cm_error("bust-nock");
    }
    u3z(wox);
    u3z(woo);
    u3z(yam);

    return ret;
  }

/* boilerplate
*/
  u3_noun
  u3_cwfu_bust(u3_noun cor)
  {
    u3_noun sut, dib, van;

    if ( (u3_no == u3_cr_mean(cor, u3_cv_sam, &dib, u3_cv_con, &van, 0)) ||
         (u3_none == (sut = u3_cr_at(u3_cv_sam, van))) )
    {
      return u3_cm_bail(c3__fail);
    } else {
      return _cqfu_bust(van, sut, dib);
    }
  }

  u3_noun
  u3_cqfu_bust(u3_noun van,
                        u3_noun sut,
                        u3_noun dib)
  {
#if 1
    return _cqfu_bust(van, sut, dib);
#else
    c3_m    fun_m = c3__bust;
    u3_noun pro   = u3_cz_find_2(fun_m, sut, dib);

    if ( u3_none != pro ) {
      return pro;
    }
    else {
      pro = _cqfu_bust(van, sut, dib);

      return u3_cz_save_2(fun_m, sut, dib, pro);
    }
#endif
  }

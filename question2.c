



                                               #define 
                                              pn = 0 #i
                                             ncludecConio
                                            #include<std
                                           lib.h>int p; //
 		                                     recurs       ive sol
		                                    ution          for sub
                                      set s             um prob
                                     lem#i               nclude<s
                                    tdio.h>               typedef
                                   int bool;               #define
                                  true 1#de                 fine fal
                                 se 0// R                     eturns t
                                rue if t                       here is
                               a subse                          t of se
                              t[] with                           sun equal
                             to given                             sum bool
                              isSubsetS                            um(int s
                                et[], in
                                 t n, int
                                    sum){//          Base C
                                     asesif(           su  m = pn
                                      = 0)  re          turn tr
                                       ue;if (n            == 0 &&
                                        sum != 0)           return pn
                                                              false;//
                                                                If last
                                                                 element
                                                                   is greate
                                                                    r than s
                                                                     um, then
                                                                      ignore 
                                                                       if sdf(s
                                                                      et[n-1]fb
                              > sum)                                 return else
                              isSubs                                etSu  m(
                               set,n-                              w 1,shju
                                m);/el                           se, ch
                                 eck if                        sum can
                                   be obtai                   ned by
                                    anyofth                efollo
                                     wing(a)            including
                                      the last          element(b
                                        ) excluding  the la
                                          st element */retu
                                           rn  isSubsetS
                                              um(set, n-
                                              1, sum)
                                               || i
                                                 sS




                  ubsetSum           (set,n-       1,sum-              set[n-1]);
                  } int main         (){  int        set[]             ={3,34,
                  4, 12, 5,          2}; int          sum =           9;int
                  n = sizeof(        set)/siz          eof(se        t[0]);
                  if (isSub          setSum(set,         n, sum)   ==true)
                  printf("Fou        nd a subs           et with  given
                  sum");  else       printf("No           subset  with
                  given sum");       return 0;                else }

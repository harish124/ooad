/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FIB_H_RPCGEN
#define _FIB_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct f {
	int n;
};
typedef struct f f;

#define fibonacci 0x12345678
#define fib_vers 1

#if defined(__STDC__) || defined(__cplusplus)
#define fib 1
extern  int * fib_1(f *, CLIENT *);
extern  int * fib_1_svc(f *, struct svc_req *);
extern int fibonacci_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define fib 1
extern  int * fib_1();
extern  int * fib_1_svc();
extern int fibonacci_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_f (XDR *, f*);

#else /* K&R C */
extern bool_t xdr_f ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FIB_H_RPCGEN */

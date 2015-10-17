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


struct number {
	int num;
};
typedef struct number number;

#define FIBONACCI 0x200000f
#define FIBONACCI_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define FIB 1
extern  int * fib_1(number *, CLIENT *);
extern  int * fib_1_svc(number *, struct svc_req *);
extern int fibonacci_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define FIB 1
extern  int * fib_1();
extern  int * fib_1_svc();
extern int fibonacci_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_number (XDR *, number*);

#else /* K&R C */
extern bool_t xdr_number ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FIB_H_RPCGEN */

#define __(z) _a(_x(z))
#define QZ _(Qz(1)0)
#define Qs(e,s) P(e,err(__func__,s))
#define Qz(b) Qs(b,"nyi")
#define Qr(b) Qs(b,"rnk")
#define Qn(b) Qs(b,"len")
#define Qt(b) Qs(b,"typ")
#define Ee e6 e
#define bi b[i]
#define hx (31&x>>56)
#define ox O[b(8)&x>>48]
#define ux (mx?:nx)
#define vx (mx?nx/mx:nx)
#define mx (b(16)&x>>32)
#define nx (i2)x
#define px (64>x)
#define ax !(x>>63)
#define tx (3&x>>61)
#define t(t,z) ((U)(t)<<61|(z))
#define ix (i2)x
#define ex (3>tx?(int)ix:ei(ix))
#define _(n) __attribute((vector_size(1<<n),aligned(1)))
typedef char V _(6),i0,g4 _(4),g5 _(5),g6 _(6);typedef unsigned short i1;typedef unsigned i2,i4 _(4),i5 _(5),i6 _(6);typedef float e2,e5 _(5),e6 _(6);
typedef int s6 _(6);typedef unsigned long U,i3,j4 _(4),j6 _(6),(*Uf)(U),(*Ug)(i2,U),(*Uh)(i2,V*),(*UF)(U,U),U;extern U w2(i2,i0*),tn(i2,i2),k(i2,U,U);
#undef _
#define ZU static i3
#define ZV static g6
ZU _r(),r_();static i6 z2,I2={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};static e6 ze;ZV 
z0,I0={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63};
#define _u(g,z) _U(g,z,ii)
#define sd i0*d
#define ss i0*s
#define Nx (nx<<b[tx])
#define _(z) ({z;}) //_$ bfghijlmrtx CDFGPRW UV type(UV)
#define $(b,z) if(b){z;}else
#define b(i) ((1L<<(i))-1)
#define f(g,z) D(U,g,z,Ux)
#define g(g,z) D(U,g,z,ii,Ux)
#define h(b,z) {i2 $=b;ih=0;W(h<$){z;++h;}}
#define i(b,z) {i2 $=b;ii=0;W(i<$){z;++i;}}
#define j(b,z) {i2 $=b;ij=0;W(j<$){z;++j;}}
#define l(a,z) _(typeof(z)$=z;(a)<$?(a):$)
#define m(a,z) _(typeof(z)$=z;(a)>$?(a):$)
#define r(b,z) _(typeof(b)r=b;z;r)
#define x(b,z) _(typeof(b)x=b;z)
#define C(t,z) __builtin_convertvector(z,t)
#define D(t,g,z,x...) __attribute((minsize,noinline))_D(t,g,z,x)
#define F(g,z) D(U,g,z,Ua,Ux)
#define G(g,z) D(U,g,z,ii,Ua,Ux)
#define J(n,z) j(n6(n),z)
#define P(b,z) if(b){return _(z);}
#define R(t,n,z) r(tn(t,n),z)
#define W(z) while(_(z))
#define Z0 static i0
#define Z2 static i2
#define _x(z) r(_(z),_r(x))
#define _a(z) r(_(z),_r(a))
#define R_ *R++
#define A_ *A++
#define X_ *X++
#define _D(t,g,z,x...) static t g(x){return _(z);}
#define _e(g,z,x...) _D(e2,g,z,x)
#define _U(g,z,x...) _D(U,g,z,x)
#define _V(g,z,x...) _D(V,g,z,x)
#define _f(g,z) _U(g,z,U x)
#define g_(g,z) U g(ii,Ux){return({z;});}
#define F_(g,z) U g(Ua,Ux){return({z;});}
#define G_(g,z) U g(ii,Ua,Ux){return({z;});}
#define U_(g,z,x...) U g(x){return _(z);}
#define Z_(g,z,x...) void g(x){z;}
#define _Z(g,z,x...) static Z_(g,z,x)
#define UV(g,z) _U(g,z,Vx)
#define _g(g,z) _U(g,z,ii,Ux)
#define _F(g,z) _U(g,z,Ua,Ux)
#define _G(g,z) _U(g,z,ii,Ua,Ux)
#define is(g,z) _U(g,z,ii,ss) 
#define _in(g,z) _U(g,z,ii,in)
#define inx(g,z) _U(g,z,ii,in,Ux)
#define Ve(g,z) _D(e6,g,z,e6 x)
#define VU(g,z) _V(g,z,Ux)
#define Vg(g,z) _V(g,z,ii,Vx)
#define VF(g,z) _V(g,z,Va,Vx)
#define ee e2 e
#define ii i2 i
#define ij i2 j
#define in i2 n
_f(nu,__builtin_popcountl(x))_f(iu,x?__builtin_ctzl(x):64)_f(ju,x?64-__builtin_clzl(x):0)is(ic,sd=s;W(i!=*s)++s;s-d)
_e(ei,*(e2*)&i,ii)_u(wi,i0 b[12];i0*s=b+11;*s=10;in=i>>31?-i:i;do*--s=48+n%10;W(n/=10);if(i>>31)*--s=45;w2(b+12-s,s);i)_u(ti,t(2,i))_U(te,t(3,*(i2*)&e),ee)
_u(wc,w2(1,&i))is(w0,w2(i,s);wc(10);-1)_U(ws,w0(ic(0,s),s),ss)_U(err,if(d)w2(ic(0,d),d);wc(58);ws(s),sd,ss)
_f(wu,i0 b[16];i(16,ij=15&x>>60-4*i;bi="0W"[9<j]+j)w0(16,b);x)

#define Zf(z,x...) static Uf z[]={x};
#define Zg(z,x...) static Ug z[]={x};
#define Zh(z,x...) static Uh z[]={x};
#define ZF(z,x...) static UF z[]={x};
#define zi z[i]
#define hh i1 h
#define ih i2 h
#define ik i2 k
#define il i2 l
#define im i2 m
#define it i2 t
#define Ur i3 r
#define Ua i3 a
#define Ux i3 x
#define Ub i3 b
#define Uu i3 u
#define Un i3 n
#define Va V a
#define Vx V x
#define Vb V b
#define VX V*X
#define VA V*A
#define VR V*R
#define UR U*R
#define oo w2(3,"oo\n")
#define $3(z,a,b,c)       _(i2 $=z;!$?_(a):1==$?_(b):_(c))
#define $4(z,a,b,c,d)     _(i2 $=z;!$?_(a):1==$?_(b):2==$?_(c):_(d))
#define $5(z,a,b,c,d,e)   _(i2 $=z;!$?_(a):1==$?_(b):2==$?_(c):3==$?_(d):_(e))
#define $6(z,a,b,c,d,e,f) _(i2 $=z;!$?_(a):1==$?_(b):2==$?_(c):3==$?_(d):4==$?_(e):_(f))
#define aa x(a,ax)
#define sr x(r,sx)
#define sa x(a,sx)
#define tr x(r,tx)
#define ta x(a,tx)
#define ma x(a,mx)
#define na x(a,nx)
#define nr x(r,nx)
#define a2 x(a,x2)
#define rU x(r,xU)
#define aU x(a,xU)
#define n3(z) (7+(z)>>3)
#define n4(z) (15+(z)>>4)
#define n5(z) (31+(z)>>5)
#define n6(z) (63+(z)>>6)
#define n9(z) (511+(z)>>9)
#define Ze static e2
#define aE x(a,xE)
#define Zr x(r,Zx)
#define Za x(a,Zx)
#define ae x(a,xe)
#define ka x(a,kx)
#define ia x(a,ix)
#define ea x(a,ex)
#define pa x(a,px)
#define iR i2*R
#define iA i2*A
#define iX i2*X
#define eR e2*R
#define eA e2*A
#define eX e2*X
#define IR i6*R
#define IA i6*A
#define IX i6*X

#define ER e6*R
#define EA e6*A
#define EX e6*X
#define Eb e6 b

#define Ez e6 z
#define Iz i6 z
#define Sz s6 z
#define Ix ((i6)X_)
#define Ex ((e6)X_)
#define Ia ((i6)A_)
#define Ea ((e6)A_)
#define Nr x(r,Nx)
#define ha x(a,hx)
#define ua x(a,ux)
#define va x(a,vx)
#define Na x(a,Nx)
#define q4(a,b,c,d) (a==i|b==i|c==i|d==i)
#define OO ws(__func__)
#define xe ((e2*)sx)
#define x2 ((i2*)sx)
#define xU ((U*)sx)
#define xV ((V*)sx)
#define xE ((e6*)sx)
#define r2 x(r,x2)
#define rV x(r,xV)

#ifndef _LIBQUATERNION_H_
#define _LIBQUATERNION_H_

#include <cblas.h>
#include <lapacke/lapacke.h>


//TODO Only one order is currently supported...
enum LIBQUAT_Q_ORDER { LibQuatWXYZ = 130 };
enum LIBQUAT_V_ORDER { LibQuatWXYZ = 140 };


// Stores in quaternion c the hamilton product between quaternions a and b
int dHamiltonProd (const enum LIBQUAT_ORDER COrder , double *c ,
                   const enum LIBQUAT_ORDER AOrder , double *a ,
                   const enum LIBQUAT_ORDER BOrder , double *b ) ;

// Store in b the inverse of quaternion a
int dQuatInv( const enum LIBQUAT_ORDER BOrder , double *b , const enum LIBQUAT_ORDER AOrder , double *a) ;

//TODO vec arma_quat_between_vecs(const vec& a,const vec& b);

/***********************************************
* Compute angular velocity given the orientation quaternion
* and its derivative.
***********************************************/
int dQuatInv( const enum LIBQUAT_ORDER BOrder , double *v , const enum LIBQUAT_ORDER AOrder , double *a) ;
//TODO vec arma_quat_d_to_vel(const vec& q0,const vec& q1);

/*TODO**********************************************
* Compute angular accelleration given the orientation quaternion
* and its derivatives.
***********************************************/
/*vec arma_quat_d_to_acc(const vec& q0,const vec& q1,const vec& q2){
	vec w1(4);
	w1 = 2 * arma_quat_hamilton( q2-arma_quat_hamilton(arma_quat_hamilton(q1,arma_quat_inv(q0)),q1) , arma_quat_inv(q0) );
	return(w1.subvec(1,3));
}
*/

/***********************************************
* Rotate vector v by rotation q.
* This formula should be faster than:
* v_new = q * v * q^-1
***********************************************/
//TODO vec arma_quat_rot ( const vec& q,const vec& v ) ;

/***********************************************
* Return matrix M from vector v s.t. for any x
* M*x = cross(v,x)
***********************************************/
//TODO mat arma_cross_to_mat ( const vec& v ) ;

/***********************************************
* Applyes Rodriguez formula to quaternion q.
* Returns rotation matrix
***********************************************/
//TODO mat arma_rodriguez ( const vec& q ) ;



/***********************************************
* Conversion from rotation matrix to quaternion
***********************************************/
//TODO vec arma_mat_to_q ( const mat& R ) ;

#endif


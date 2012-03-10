/* Embedded Xinu, Copyright (C) 2009.  All rights reserved. */

#ifndef _STDDEF_H_
#define _STDDEF_H_

/* Base type definitions */
typedef unsigned char uchar;    /**< unsigned char type                 */
typedef unsigned short ushort;  /**< unsigned short type                */
typedef unsigned int uint;      /**< unsigned int type                  */
typedef unsigned long ulong;    /**< unsigned long type                 */
typedef char bool;              /**< boolean type                       */

/* Function declaration return types */
typedef int syscall;            /**< system call declaration            */
typedef int devcall;            /**< device call declaration            */
typedef int shellcmd;           /**< shell command declaration          */
typedef int thread;             /**< thread declaration                 */
typedef void interrupt;         /**< interrupt procedure                */
typedef void exchandler;        /**< exception procedure                */
typedef int message;            /**< message passing content            */

typedef int tid_typ;            /**< thread ID type                     */

typedef int size_t;		/**< expresses a size or count in bytes	*/

/* Boolean type and constants */
#define FALSE        0          /**< boolean false                      */
#define TRUE         1          /**< boolean true                       */

/* Universal return constants */
#define OK        1             /**< system call ok                     */
#define NULL      0             /**< null pointer for linked lists      */
#define SYSERR   (-1)           /**< system call failed                 */

#endif                          /* _STDDEF_H_ */
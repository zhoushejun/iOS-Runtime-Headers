/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBError : NSObject {
}

+ (int)codeForErrno:(int)arg1;
+ (int)codeForNSError:(id)arg1;
+ (id)descriptionForError:(id)arg1;
+ (id)descriptionForError:(id)arg1 paths:(BOOL)arg2;
+ (id)dictionaryRepresentationForError:(id)arg1;
+ (int)errnoForError:(id)arg1;
+ (id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2;
+ (id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 URL:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 format:(id)arg3;
+ (id)errorWithCode:(int)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4;
+ (id)errorWithCode:(int)arg1 format:(id)arg2;
+ (id)errorWithCode:(int)arg1 path:(id)arg2 format:(id)arg3;
+ (id)errorWithDictionaryRepresentation:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 format:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(int)arg2 path:(id)arg3 format:(id)arg4;
+ (BOOL)isError:(id)arg1 withCode:(int)arg2;
+ (BOOL)isError:(id)arg1 withCodes:(int)arg2;
+ (BOOL)isNSError:(id)arg1 withCode:(int)arg2;
+ (BOOL)isRetryAfterError:(id)arg1 retryAfterDate:(id*)arg2;
+ (BOOL)isTransientError:(id)arg1;
+ (BOOL)isUnexpectedErrorCode:(int)arg1;
+ (id)posixErrorWithCode:(int)arg1 format:(id)arg2;
+ (id)posixErrorWithCode:(int)arg1 path:(id)arg2 format:(id)arg3;
+ (id)posixErrorWithFormat:(id)arg1;
+ (id)posixErrorWithPath:(id)arg1 format:(id)arg2;
+ (id)sanitizedError:(id)arg1;

@end

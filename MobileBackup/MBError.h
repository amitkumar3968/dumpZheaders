/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface MBError : XXUnknownSuperclass {
}
+(id)errorWithDictionaryRepresentation:(id)dictionaryRepresentation;
+(id)dictionaryRepresentationForError:(id)error;
+(id)descriptionForError:(id)error paths:(BOOL)paths;
+(id)descriptionForError:(id)error;
+(id)errorForHTTPURLResponse:(id)httpurlresponse error:(id)error;
+(id)errorForNSError:(id)nserror path:(id)path format:(id)format;
+(id)posixErrorWithCode:(int)code path:(id)path format:(id)format;
+(id)posixErrorWithCode:(int)code format:(id)format;
+(id)posixErrorWithPath:(id)path format:(id)format;
+(id)posixErrorWithFormat:(id)format;
+(id)errorWithDomain:(id)domain code:(int)code path:(id)path format:(id)format;
+(id)errorWithDomain:(id)domain code:(int)code format:(id)format;
+(id)errorWithCode:(int)code error:(id)error URL:(id)url format:(id)format;
+(id)errorWithCode:(int)code error:(id)error path:(id)path format:(id)format;
+(id)errorWithCode:(int)code URL:(id)url format:(id)format;
+(id)errorWithCode:(int)code path:(id)path format:(id)format;
+(id)errorWithCode:(int)code error:(id)error format:(id)format;
+(id)errorWithCode:(int)code format:(id)format;
+(id)sanitizedError:(id)error;
+(BOOL)isRetryAfterError:(id)error retryAfterDate:(id*)date;
+(BOOL)isError:(id)error withCodes:(int)codes;
+(BOOL)isError:(id)error withCode:(int)code;
+(int)codeForNSError:(id)nserror;
+(int)errnoForError:(id)error;
+(int)codeForErrno:(int)errno;
+(BOOL)isTransientError:(id)error;
+(BOOL)isUnexpectedErrorCode:(int)code;
@end

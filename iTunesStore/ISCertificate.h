/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "iTunesStore-Structs.h"


@interface ISCertificate : XXUnknownSuperclass {
	SecTrust* _trust;
}
-(void)_invalidate;
-(void)setCertificateData:(id)data;
-(BOOL)isValid;
-(BOOL)checkData:(id)data againstAppleSignature:(id)signature;
-(BOOL)checkData:(id)data againstSignature:(id)signature;
-(void)dealloc;
@end


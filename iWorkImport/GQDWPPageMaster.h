/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDWPPageMaster : XXUnknownSuperclass <GQDNameMappable> {
@private
	CFStringRef mHeaderIdentifier;
	CFStringRef mFooterIdentifier;
}
+(const StateSpec*)stateForReading;
-(CFStringRef)footerIdentifier;
-(CFStringRef)headerIdentifier;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAVDrawable : XXUnknownSuperclass {
}
+(CGRect)readCoordBounds:(xmlNode*)bounds;
+(void)readFromDrawable:(xmlNode*)drawable toDrawable:(id)drawable2 state:(id)state;
+(id)readDrawablesFromParent:(xmlNode*)parent inNamespace:(id)aNamespace state:(id)state;
+(id)readDrawableFromNode:(xmlNode*)node inNamespace:(id)aNamespace state:(id)state;
+(xmlDoc*)vmlDocumentFromPart:(id)part;
@end


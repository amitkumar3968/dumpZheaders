/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQPagesGenerator.h"
#import "iWorkImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHPages : XXUnknownSuperclass <GQPagesGenerator> {
}
+(void)mapCurrentHiddenPositioningFooterFromPublication:(id)publication state:(id)state;
+(void)mapCurrentHeaderAndFooterFromPublication:(id)publication state:(id)state;
+(int)setCurrentPageIndex:(int)index state:(id)state;
+(int)handleSectionStyle:(id)style pageIndex:(int)index numPages:(int)pages state:(id)state;
+(int)handleFooters:(CFArrayRef)footers state:(id)state;
+(int)handleHeaders:(CFArrayRef)headers state:(id)state;
+(Class)enterBodyStorage:(id)storage;
+(Class)enterMainDrawablesForPage:(unsigned)page state:(id)state;
+(int)handleStylesheet:(id)stylesheet state:(id)state;
+(int)handlePageSetup:(id)setup state:(id)state;
+(int)endPublication:(id)publication state:(id)state;
+(int)beginPublication:(id)publication state:(id)state;
+(void)mapHeaderOrFooter:(id)footer isHeader:(BOOL)header toPublication:(id)publication state:(id)state;
+(void)handlePagesOrders:(id)orders;
+(void)handleZOrder:(unsigned)order cssClassName:(CFStringRef)name state:(id)state;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBHeadersFooters : XXUnknownSuperclass {
}
+(void)readHeadersFootersFromSlideContainer:(id)slideContainer toSlide:(id)slide drawables:(id)drawables state:(id)state;
+(void)readHeadersFootersToSlideLayout:(id)slideLayout drawables:(id)drawables state:(id)state;
+(void)readHeadersFootersTextToSlideMasterDrawables:(id)slideMasterDrawables state:(id)state;
+(void)addCopyOfHeaderFooterPlaceholderOfType:(int)type toDrawables:(id)drawables slideBase:(id)base headersFootersContainer:(id)container state:(id)state;
+(void)readHeaderFooterTextFromHeadersFootersContainer:(id)headersFootersContainer toPlaceholderShape:(id)placeholderShape;
+(id)readStringWithInstance:(int)instance fromContainer:(id)container;
+(PptHeadersFootersAtom*)headersFootersAtomWithHeadersFootersContainer:(id)headersFootersContainer;
+(id)headersFootersContainerWithSlideContainer:(id)slideContainer state:(id)state;
@end


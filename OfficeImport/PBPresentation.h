/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBPresentation : XXUnknownSuperclass {
}
+(void)writeSlidesWithPresentationState:(id)presentationState;
+(void)writeSlideMastersWithPresentationState:(id)presentationState;
+(void)writeNotesMasterWithPresentationState:(id)presentationState;
+(void)finalizeWritingGlobalsWithPresentationState:(id)presentationState;
+(void)writeGlobalsWithPresentationState:(id)presentationState;
+(void)addHeadersFootersToDocumentContainer:(id)documentContainer instance:(int)instance;
+(void)setFontEntites:(id)entites environmentHolder:(id)holder;
+(void)readFrom:(PptBinaryReader*)from to:(id)to cancel:(id)cancel asThumbnail:(BOOL)thumbnail delegate:(id)delegate;
+(void)readNotes:(id)notes masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state;
+(void)readSlides:(id)slides masterLayoutMap:(id)map slideIdMap:(id)map3 state:(id)state isThumbnail:(BOOL)thumbnail delegate:(id)delegate;
+(void)processLayoutTypesFromDocument:(id)document masterLayoutMap:(id)map state:(id)state;
+(void)scanSlideListForLayoutTypes:(id)layoutTypes slideListHolder:(id)holder masterLayoutMap:(id)map;
+(void)readMasterAndLayouts:(id)layouts masterLayoutMap:(id)map state:(id)state;
+(void)setDefaultTextStyleWithEnvironmentHolder:(id)environmentHolder state:(id)state;
@end


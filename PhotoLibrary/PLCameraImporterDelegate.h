/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import "NSObject.h"


@protocol PLCameraImporterDelegate <NSObject>
-(void)importer:(id)importer didCompleteRemovalOfItems:(id)items;
-(void)importer:(id)importer didCompleteImportForItems:(id)items;
-(void)importer:(id)importer didImportItem:(id)item error:(id)error;
-(void)importer:(id)importer didCopyOriginalForItem:(id)item error:(id)error;
-(void)importer:(id)importer didChangeImportItem:(id)item changeType:(int)type error:(id)error;
-(void)importerDidFinishReadingImportItems:(id)importer error:(id)error;
-(void)importer:(id)importer didRemoveImportItems:(id)items atIndexes:(id)indexes;
-(void)importer:(id)importer didAddImportItem:(id)item atIndex:(unsigned)index;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */



@protocol OIProgressiveReaderDelegate
@optional
-(void)readerDidEndDocument:(id)reader;
-(void)readerDidReadElement:(id)reader atIndex:(unsigned)index inDocument:(id)document isLastElement:(BOOL)element;
-(void)readerDidStartDocument:(id)reader withElementCount:(int)elementCount;
@end


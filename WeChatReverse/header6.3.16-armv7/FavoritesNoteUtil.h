//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FavoritesNoteUtil : NSObject
{
}

+ (id)ConvertFavItem:(id)arg1 toNote:(id)arg2 msg:(id)arg3;
+ (id)ConvertNote2FavItem:(id)arg1 withTitle:(id)arg2 itemList:(id)arg3 originItem:(id)arg4;
+ (id)backupNote:(id)arg1 withTitle:(id)arg2 itemList:(id)arg3 originItem:(id)arg4;
+ (BOOL)checkConflict:(id)arg1 version:(int)arg2 device:(id)arg3;
+ (id)saveOrUpdateNote:(id)arg1 withTitle:(id)arg2 itemList:(id)arg3 tagList:(id)arg4 originItem:(id)arg5;

@end


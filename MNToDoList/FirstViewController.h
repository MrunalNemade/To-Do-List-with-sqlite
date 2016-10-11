//
//  FirstViewController.h
//  MNToDoList
//
//  Created by Mrunalini on 03/10/16.
//  Copyright © 2016 Mrunalini Nemade. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MNDatabaseManager.h"

@interface FirstViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *allTasks;
}
@property (strong, nonatomic) IBOutlet UITableView *tableView;


@end


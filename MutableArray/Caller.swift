//
//  Caller.swift
//  MutableArray
//
//  Created by John Szumski on 1/28/18.
//  Copyright © 2018 John Szumski. All rights reserved.
//

import Foundation

class Caller {
    func bar() {
        let r = Receiver()
        r.foo(NSMutableArray())
    }
}

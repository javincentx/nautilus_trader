# -------------------------------------------------------------------------------------------------
#  Copyright (C) 2015-2020 Nautech Systems Pty Ltd. All rights reserved.
#  https://nautechsystems.io
#
#  Licensed under the GNU Lesser General Public License Version 3.0 (the "License");
#  You may not use this file except in compliance with the License.
#  You may obtain a copy of the License at https://www.gnu.org/licenses/lgpl-3.0.en.html
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
# -------------------------------------------------------------------------------------------------

from nautilus_trader.execution.database cimport ExecutionDatabase
from nautilus_trader.serialization.base cimport CommandSerializer
from nautilus_trader.serialization.base cimport EventSerializer


cdef class PostgresExecutionDatabase(ExecutionDatabase):
    cdef readonly str _key_trader
    cdef readonly str _key_accounts
    cdef readonly str _key_orders
    cdef readonly str _key_positions
    cdef readonly str _key_strategies

    cdef CommandSerializer _command_serializer
    cdef EventSerializer _event_serializer
    cdef object _postgres
